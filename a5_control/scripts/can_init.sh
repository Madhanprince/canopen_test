# #!/bin/bash

# # ==============================================================================
# # Shell script to bringup CAN in Jetson
# # ==============================================================================
# # This shell script is used to run the commands to brinup can0 interface in 
# # Jetson
# #
# # Configuration version: 1.0.0
# # Author: Jeevaga Kirupha Roopan S
# # Date: 2025-04-29


# # File History Log:
# # - version: 1.0.0
# #   date: 2025-04-29
# #   author: Jeevaga Kirupha Roopan S
# #   change_description: Initial release of can_up.sh script
# # ==============================================================================

# #Can Down
# echo "agx" | sudo -S ip link set can0 down 2>/dev/null
# sudo modprobe -r mttcan

# #Can Up
# sudo modprobe can
# sudo modprobe can_raw
# sudo modprobe mttcan 
# interface=can0 
# if [ $# -gt 0 ]; then
#     interface=$1
# fi

# sudo ip link set $interface type can bitrate 500000 sjw 4 
# sudo ifconfig $interface up
