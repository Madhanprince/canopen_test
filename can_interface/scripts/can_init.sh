#!/bin/bash
#
# can_dual_updown.sh
#
# Bring up or take down can0 and can1 together.
#
# Usage:
#   ./can_dual_updown.sh up
#   ./can_dual_updown.sh down
#   ./can_dual_updown.sh up can0        # single interface only
#   ./can_dual_updown.sh down can1      # single interface only
#
# Defaults: bitrate 500000, sjw 4, matches your Italsea/A5 setup.

BITRATE=500000
SJW=4
SUDO_PASS="agx"

action=$1
interface=$2

bring_down () {
    local iface=$1
    echo "Bringing down $iface..."
    echo "$SUDO_PASS" | sudo -S ip link set "$iface" down 2>/dev/null
}

bring_up () {
    local iface=$1
    echo "Bringing up $iface..."
    sudo ip link set "$iface" type can bitrate "$BITRATE" sjw "$SJW"
    sudo ifconfig "$iface" up
}

if [ "$action" == "down" ]; then
    if [ -n "$interface" ]; then
        bring_down "$interface"
    else
        bring_down can0
        bring_down can1
    fi

    sudo modprobe -r mttcan

elif [ "$action" == "up" ]; then
    sudo modprobe can
    sudo modprobe can_raw
    sudo modprobe mttcan

    if [ -n "$interface" ]; then
        bring_up "$interface"
    else
        bring_up can0
        bring_up can1
    fi

else
    echo "Usage: $0 {up|down} [can0|can1]"
    exit 1
fi

echo "Done."
ip -details link show can0 2>/dev/null
ip -details link show can1 2>/dev/null