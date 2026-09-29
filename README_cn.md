# 中文 | [English](README.md)

# ros2_bridger 完整使用步骤

ros2_bridger 用于将开发机接入 LimX 机器人网络，实现跨网络的 ROS 2 通信。本仓库提供 x86_64（amd64）与 aarch64 两种架构、ROS 2 Foxy / Humble / Jazzy / Lyrical 四个发行版的预编译包。

#### 1. 网络连接与验证

- 连接机器人网络：通过有线或无线方式接入机器人所在局域网（确保与目标设备在同一网段）。

- 网络连通性测试：

  ```bash
  # 测试与目标设备（10.192.1.2）的连通性
  ping 10.192.1.2
  ```

- 调整网络缓冲区（提升通信性能，只需执行一次，重复执行不会产生重复配置）：

  ```bash
  echo -e "net.core.wmem_max=12582912\nnet.core.rmem_max=12582912" | sudo tee /etc/sysctl.d/60-ros2-bridger.conf
  sudo sysctl --system
  ```

#### 2. 配置 ros2_bridger 连接参数

- 设置 ros2_bridger 通信地址：

  ```bash
  export MROS_IP_LIST=10.192.1.x
  ```

#### 3. 启动 ros2_bridger

根据本地设备架构和 ROS 2 发行版选择对应命令。

> **注意：** 本仓库的 `install/` 目录中包含定制版的 `std_msgs` 与 `std_srvs`，source 之后会覆盖系统自带的同名包。建议在**单独的终端**中运行 ros2_bridger，不要在同一终端中编译或运行您自己的 ROS 2 工作空间。

##### 3.1 x86_64 架构

- ROS2 Foxy

  ```bash
  # 加载 ROS 环境
  source /opt/ros/foxy/setup.bash

  # 加载 ros2_bridger 安装环境
  source amd64/foxy/install/setup.bash

  # 启动桥接节点
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Humble

  ```bash
  # 加载 ROS 环境
  source /opt/ros/humble/setup.bash

  # 加载 ros2_bridger 安装环境
  source amd64/humble/install/setup.bash

  # 启动桥接节点
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Jazzy

  ```bash
  # 加载 ROS 环境
  source /opt/ros/jazzy/setup.bash

  # 加载 ros2_bridger 安装环境
  source amd64/jazzy/install/setup.bash

  # 启动桥接节点
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Lyrical

  ```bash
  # 加载 ROS 环境
  source /opt/ros/lyrical/setup.bash

  # 加载 ros2_bridger 安装环境
  source amd64/lyrical/install/setup.bash

  # 启动桥接节点
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

##### 3.2 aarch64 架构

- ROS2 Foxy

  ```bash
  # 加载 ROS 环境
  source /opt/ros/foxy/setup.bash

  # 加载 ros2_bridger 安装环境
  source aarch64/foxy/install/setup.bash

  # 启动桥接节点
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Humble

  ```bash
  # 加载 ROS 环境
  source /opt/ros/humble/setup.bash

  # 加载 ros2_bridger 安装环境
  source aarch64/humble/install/setup.bash

  # 启动桥接节点
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Jazzy

  ```bash
  # 加载 ROS 环境
  source /opt/ros/jazzy/setup.bash

  # 加载 ros2_bridger 安装环境
  source aarch64/jazzy/install/setup.bash

  # 启动桥接节点
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

- ROS2 Lyrical

  ```bash
  # 加载 ROS 环境
  source /opt/ros/lyrical/setup.bash

  # 加载 ros2_bridger 安装环境
  source aarch64/lyrical/install/setup.bash

  # 启动桥接节点
  ros2 launch mrosbridger mrosbridger.launch.py
  ```

##### 3.3 启动参数（可选）

可在启动命令后追加 `参数名:=值` 来调整桥接行为，例如：

```bash
ros2 launch mrosbridger mrosbridger.launch.py bridge_ros2mros:=true
```

| 参数 | 默认值 | 说明 |
| --- | --- | --- |
| `bridge_mros2ros` | `true` | 是否将 MROS 端的服务/发布者桥接给 ROS 端的客户端/订阅者 |
| `bridge_ros2mros` | `false` | 是否将 ROS 端的服务/发布者桥接给 MROS 端的客户端/订阅者 |
| `mros2ros_include` | 空 | MROS→ROS 方向仅桥接的话题、服务和动作，多个名称用 `;` 分隔 |
| `mros2ros_execlude` | 空 | MROS→ROS 方向排除的话题、服务和动作，多个名称用 `;` 分隔 |
| `ros2mros_include` | 空 | ROS→MROS 方向仅桥接的话题、服务和动作，多个名称用 `;` 分隔 |
| `ros2mros_execlude` | 空 | ROS→MROS 方向排除的话题、服务和动作，多个名称用 `;` 分隔 |

> 注：参数名中的 `execlude` 为当前版本的实际拼写，请按原样使用。

#### 4. 验证桥接是否生效

- 查看节点是否正常启动：

  ```bash
  # 新开终端，查看活跃节点
  ros2 node list
  ```

- 测试话题通信：

  ```bash
  # 查看桥接的话题列表
  ros2 topic list
  ```
