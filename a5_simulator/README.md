# a5_simulator

Software simulator for the **IRIS A5** hardware controller.  
Drop-in replacement for real CAN hardware during development and CI testing.

---

## What it simulates

| Channel | Topic / Service | Direction |
|---------|----------------|-----------|
| Wheel encoders | `/wheel_encoders` (WheelEncoders) | → published |
| Ultrasonic × 4 | `/ultrasonic_ranges` (UltrasonicRanges) | → published |
| Fresh / dirty water | `/water_tank_levels` (WaterTankLevels) | → published |
| A5 status / mode | `/a5_control_status` (A5Status) | → published |
| LED commands | `/a5_control/led_control` (LedControl) | ← subscribed |
| Reset encoders | `/reset_wheel_encoders` (ResetWheelEncoders) | ← service |

---

## Build

```bash
cd ~/ros2_ws/src
cp -r <path-to>/a5_simulator .

cd ~/ros2_ws
colcon build --packages-select a5_simulator
source install/setup.bash
```

---

## Run

```bash
# Simulator only
ros2 launch a5_simulator a5_simulator.launch.py

# Two-terminal test setup
# Terminal 1 – simulator
ros2 launch a5_simulator a5_simulator.launch.py

# Terminal 2 – your real control node (no CAN hardware needed)
ros2 run a5_control a5_control_node
```

---

## Interactive CLI menu

Once running, the simulator presents a menu in the terminal:

```
╔══════════════════════════════════════════════╗
║        A5 Simulator  –  Control Menu         ║
╠══════════════════════════════════════════════╣
║  [1] Set wheel speeds                        ║
║  [2] Set ultrasonic distance                 ║
║  [3] Set water levels                        ║
║  [4] Toggle cleaning mode (drain/fill rates) ║
║  [5] Inject fault / clear fault              ║
║  [6] Reset encoders                          ║
║  [7] Show current state                      ║
║  [0] Quit                                    ║
╚══════════════════════════════════════════════╝
```

### Key scenarios

| Goal | Steps |
|------|-------|
| Drive forward | Option 1 → L=0.3, R=0.3 |
| Spin in place | Option 1 → L=0.3, R=-0.3 |
| Obstacle (US1 close) | Option 2 → sensor 1 → 0.10 m |
| Low fresh water alert | Option 3 → fresh=5.0 |
| Full dirty tank alert | Option 3 → dirty=95.0 |
| Start cleaning cycle | Option 4 (toggles on, sets drain/fill rates) |
| E-stop / EMCY fault | Option 5 → enter EMCY code e.g. `8110` |
| Clear fault | Option 5 again (toggles off) |
| Verify encoder reset | Option 6, then check `/wheel_encoders` |

---

## Monitoring with ros2 CLI

```bash
# Live encoder ticks
ros2 topic echo /wheel_encoders

# All 4 ultrasonic ranges
ros2 topic echo /ultrasonic_ranges

# Water tank levels
ros2 topic echo /water_tank_levels

# A5 status / mode byte
ros2 topic echo /a5_control_status

# Send an LED command manually
ros2 topic pub /a5_control/led_control iris_interfaces/msg/LedControl \
    "{led_command: 63, left_indicator: true, right_indicator: false}"

# Call encoder reset service
ros2 service call /reset_wheel_encoders iris_interfaces/srv/ResetWheelEncoders
```

---

## Physics model

- **Encoders**: integrated from `speed (m/s) × ticks_per_meter × dt` at 20 Hz.
- **Ultrasonic**: base distance ± Gaussian noise (σ = 5 mm) per tick.
- **Water tanks**: linear drain/fill rates configurable at runtime.
- **Fault injection**: sets `mode_and_status = 0xFF`, zeros motor speeds.
