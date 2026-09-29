# English | [中文](README_cn.md)

# ros2_bridger Complete Usage Steps

ros2_bridger connects development machines to LimX robot networks for cross-network ROS 2 communication. This repository ships prebuilt packages for x86_64 (amd64) and aarch64, covering ROS 2 Foxy, Humble, Jazzy, and Lyrical.

#### 1. Network Connection and Verification

- Connect to the Robot Network: Access the robot's local area network via wired or wireless connection (ensure it is on the same network segment as the target device).

- Network Connectivity Test:

  ```bash
  # Test connectivity to the target device (10.192.1.2)
  ping 10.192.1.2
  ```

- Adjust network buffer (improves communication performance; safe to run more than once):

  ```bash
  echo -e "net.core.wmem_max=12582912\nnet.core.rmem_max=12582912" | sudo tee /etc/sysctl.d/60-ros2-bridger.conf
  sudo sysctl --system
  ```

#### 2. Configure ros2_bridger Connection Parameters

- Set the ros2_bridger communication address:

  ```bash
  export MROS_IP_LIST=10.192.1.x
  ```

#### 3. Launch ros2_bridger

Select the corresponding commands based on the local device architecture and ROS 2 distribution.

> **Note:** The `install/` directories in this repository contain customized `std_msgs` and `std_srvs` packages that override the system packages of the same name once sourced. Run ros2_bridger in a **dedicated terminal**, and do not build or run your own ROS 2 workspace in the same terminal.

##### 3.1 x86_64 Architecture

- ROS2 Foxy

  ```bash
  # Load ROS environment
  source /opt/ros/foxy/setup.bash

  # Load ros2_bridger installation environment
  source amd64/foxy/install/setup.bash

  # Launch the bridge node
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Humble

  ```bash
  # Load ROS environment
  source /opt/ros/humble/setup.bash

  # Load ros2_bridger installation environment
  source amd64/humble/install/setup.bash

  # Launch the bridge node
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Jazzy

  ```bash
  # Load ROS environment
  source /opt/ros/jazzy/setup.bash

  # Load ros2_bridger installation environment
  source amd64/jazzy/install/setup.bash

  # Launch the bridge node
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Lyrical

  ```bash
  # Load ROS environment
  source /opt/ros/lyrical/setup.bash

  # Load ros2_bridger installation environment
  source amd64/lyrical/install/setup.bash

  # Launch the bridge node
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

##### 3.2 aarch64 Architecture

- ROS2 Foxy

  ```bash
  # Load ROS environment
  source /opt/ros/foxy/setup.bash

  # Load ros2_bridger installation environment
  source aarch64/foxy/install/setup.bash

  # Launch the bridge node
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Humble

  ```bash
  # Load ROS environment
  source /opt/ros/humble/setup.bash

  # Load ros2_bridger installation environment
  source aarch64/humble/install/setup.bash

  # Launch the bridge node
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Jazzy

  ```bash
  # Load ROS environment
  source /opt/ros/jazzy/setup.bash

  # Load ros2_bridger installation environment
  source aarch64/jazzy/install/setup.bash

  # Launch the bridge node
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Lyrical

  ```bash
  # Load ROS environment
  source /opt/ros/lyrical/setup.bash

  # Load ros2_bridger installation environment
  source aarch64/lyrical/install/setup.bash

  # Launch the bridge node
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

##### 3.3 Launch Arguments (Optional)

Append `name:=value` to the launch command to adjust bridging behavior, for example:

```bash
ros2 launch mrosbridger mrosbridger.launch.py bridge_ros2mros:=true
```

| Argument | Default | Description |
| --- | --- | --- |
| `bridge_mros2ros` | `true` | Bridge MROS servers/publishers to ROS clients/subscribers |
| `bridge_ros2mros` | `false` | Bridge ROS servers/publishers to MROS clients/subscribers |
| `mros2ros_include` | empty | MROS→ROS topics, services, and actions to include; separate names with `;` |
| `mros2ros_execlude` | empty | MROS→ROS topics, services, and actions to exclude; separate names with `;` |
| `ros2mros_include` | empty | ROS→MROS topics, services, and actions to include; separate names with `;` |
| `ros2mros_execlude` | empty | ROS→MROS topics, services, and actions to exclude; separate names with `;` |

> Note: `execlude` is the actual spelling used by the current release; use it exactly as shown.

#### 4. Verify the Bridge Works

- Check that the node starts normally:

  ```bash
  # Open a new terminal and list active nodes
  ros2 node list
  ```

- Test topic communication:

  ```bash
  # List bridged topics
  ros2 topic list
  ```
