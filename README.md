# English | [中文](README_cn.md)



# ros2_bridger Complete Usage Steps

#### 1. Network Connection and Verification

- Connect to the Robot Network: Access the robot's  local area network via wired or wireless connection (ensure it is on the same network segment as the target device).

- Network Connectivity Test:

  ```
  # Test connectivity to the target device (10.192.1.2)
  ping 10.192.1.2
  ```

- Adjust network buffer (improve communication performance):

  ```
  echo -e "net.core.wmem_max=12582912\nnet.core.rmem_max=12582912" | sudo tee -a /etc/sysctl.conf
  sudo sysctl -p
  ```

#### 3. Configure ros2_bridger Connection Parameters

- Set the ros2_bridger communication address:

  ```
  export MROS_IP_LIST=10.192.1.x
  ```

#### 4. Launch ros2_bridger

Select the corresponding commands based on the local device architecture and ROS2 distribution:

##### 4.1 x86_64 Architecture

- ROS2 Foxy

  ```
  # Load ROS environment
  source /opt/ros/foxy/setup.bash
  
  # Load ros2_bridger installation environment
  source amd64/foxy/install/setup.bash
  
  # Launch the bridge node
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Humble

  ```
  # Load ROS environment
  source /opt/ros/humble/setup.bash
  
  # Load ros2_bridger installation environment
  source amd64/humble/install/setup.bash
  
  # Launch the bridge node
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

##### 4.2 aarch64 Architecture

- ROS2 Foxy

  ```
  # Load ROS environment
  source /opt/ros/foxy/setup.bash
  
  # Load ros2_bridger installation environment
  source aarch64/foxy/install/setup.bash
  
  # Launch the bridge node
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Humble

  ```
  # Load ROS environment
  source /opt/ros/humble/setup.bash
  
  # Load ros2_bridger installation environment
  source aarch64/humble/install/setup.bash
  
  # Launch the bridge node
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

#### 5. Verify if the Bridge Works

- Check if the node starts normally:

  ```
  # Open a new terminal and view active nodes
  ros2 node list
  ```

- Test topic communication:

  ```
  # View the list of bridged topics
  ros2 topic list
  ```
