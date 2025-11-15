# 中文 | [English](README.md)



# ros2_bridger 完整使用步骤

#### 1. 网络连接与验证

- 连接机器人网络：通过有线或无线方式接入机器人所在局域网（确保与目标设备在同一网段）

- 网络连通性测试：

  ```
  # 测试与目标设备（10.192.1.2）的连通性
  ping 10.192.1.2
  
  ```

- 调整网络缓冲区（提升通信性能）：

  ```
  echo -e "net.core.wmem_max=12582912\nnet.core.rmem_max=12582912" | sudo tee -a /etc/sysctl.conf
  sudo sysctl -p
  ```

#### 3. 配置 ros2_bridger 连接参数

- 设置ros2 bridger通信地址：

  ```
  export MROS_IP_LIST=10.192.1.x
  ```

#### 4. 启动 ros2_bridger

根据本地设备架构选择对应命令：

##### 4.1 x86_64 架构：

- ROS2 Foxy

  ```
  # 加载 ROS 环境
  source /opt/ros/foxy/setup.bash
  
  # 加载 ros2_bridger 安装环境
  source amd64/foxy/install/setup.bash
  
  # 启动桥接节点
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Humble

  ```
  # 加载 ROS 环境
  source /opt/ros/humble/setup.bash
  
  # 加载 ros2_bridger 安装环境
  source amd64/humble/install/setup.bash
  
  # 启动桥接节点
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

##### 4.2 aarch64 架构：

- ROS2 Foxy

  ```
  # 加载 ROS 环境
  source /opt/ros/foxy/setup.bash
  
  # 加载 ros2_bridger 安装环境
  source aarch64/foxy/install/setup.bash
  
  # 启动桥接节点
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Humble

  ```
  # 加载 ROS 环境
  source /opt/ros/humble/setup.bash
  
  # 加载 ros2_bridger 安装环境
  source aarch64/humble/install/setup.bash
  
  # 启动桥接节点
  ros2 launch mrosbridger mrosbridger.launch.
  ```

#### 5. 验证桥接是否生效

- 查看节点是否正常启动：

  ```
  # 新开终端，查看活跃节点
  ros2 node list
  ```

- 测试话题通信：

  ```
  # 查看桥接的话题列表
  ros2 topic list
  ```
