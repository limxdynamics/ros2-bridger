# 遥操作中的单个跟踪目标（末端、头、躯干、足等）。
# 作为 TeleopIntentFrame.targets 的元素使用。

# 目标名。约定值：left_hand / right_hand / head / torso / base /
# left_foot / right_foot / left_wrist / right_wrist。
# 新增跟踪目标只需约定新名字，不需要改本消息。
string name

# 目标位姿。参考系由 TeleopIntentFrame.reference_frame 指定。
geometry_msgs/Pose pose

# 数据可信度。接收方据此决定跟随、降级还是忽略。
uint8 VALIDITY_INVALID=0       # 非法，接收方必须忽略
uint8 VALIDITY_VALID=1         # 新鲜可用
uint8 VALIDITY_STALE=2         # 有数据但已超期
uint8 VALIDITY_EXTRAPOLATED=3  # 由外推得到，非实测
uint8 validity

# 该目标数据的采集时刻。与帧组装时刻（header.stamp）可能不同，
# 接收方据此判断单个目标的新鲜度。
builtin_interfaces/Time source_stamp
