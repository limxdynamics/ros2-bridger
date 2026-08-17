# 遥操作意图帧。输入汇聚层每组装出一个操作者帧，发布至多一条本消息。
# 承载「操作者想做什么」，不承载任何控制决策。

# stamp 为帧组装时刻；seq 为帧序号，供接收方检测丢帧。
std_msgs/Header header

uint16 SCHEMA_VERSION=1
uint16 schema_version

# 本帧的主输入源
uint8 SOURCE_UNKNOWN=0
uint8 SOURCE_VR=1
uint8 SOURCE_MOCAP=2
uint8 SOURCE_GLOVE=3
uint8 SOURCE_FUSED=4
uint8 source

# 参与本帧合成的全部输入源，按 1 << SOURCE_* 置位
uint32 source_mask

# targets 中位姿所在参考系的名称
string reference_frame

# 当参考系本身是运行时位姿（例如随头部偏航的参考系）时给出其位姿。
# 参考系为静态具名坐标系时填单位位姿。
geometry_msgs/Pose reference_pose

# 本帧的跟踪目标。目标缺席即表示该肢体本帧无输入。
teleop_msgs/TeleopTarget[] targets

# 原始输入是否有效。纯动捕帧没有手柄输入时为 false。
bool raw_valid
teleop_msgs/TeleopRawInput raw

# 操作者侧选项：是否选择了「控头」。
# 来源可能是 VR 应用内的选择，也可能是兼容服务设置，不属于设备原始输入。
bool head_control_selected

# 全身重定向结果是否有效。是否真正下发由接收方决定。
bool retarget_valid
controller_msgs/JointCmd retarget_joints
