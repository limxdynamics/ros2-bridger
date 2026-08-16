# 遥操作会话状态。由决策层单向广播，全系统唯一权威，其余模块只读。
# 接收方不得维护本状态的副本，也不得自行修改跟随状态。

std_msgs/Header header

uint16 SCHEMA_VERSION=1
uint16 schema_version

uint8 SESSION_INACTIVE=0  # 未进入遥操作
uint8 SESSION_ACTIVE=1    # 遥操作激活
uint8 SESSION_HOMING=2    # 回初始姿态流程中，接收方应暂停输出目标
uint8 SESSION_FAULT=3     # 故障
uint8 session_state

# 当前遥操作模式名，由产品定义。用字符串以便新增模式不改本消息。
string mode

# 逐肢体决策。肢体缺席时按不跟随处理。
teleop_msgs/TeleopLimbState[] limbs

# 重锚计数，单调递增。数值发生变化即要求接收方用当前输入与末端反馈
# 重新建立锚点。用计数而非布尔边沿，因为收发双方不同频，边沿会丢。
uint32 reanchor_epoch

# 是否仍需要接收方计算全身重定向。纯性能提示，接收方可以忽略。
bool retarget_required

uint8 FAULT_NONE=0
uint8 FAULT_INPUT_TIMEOUT=1  # 上游输入超时
uint8 FAULT_TARGET_JUMP=2    # 目标跳变被拦截
uint8 FAULT_OUTPUT=3         # 下发失败
uint8 FAULT_INTERNAL=4       # 决策层内部错误
uint8 fault_code

# 故障详情，供日志与诊断使用，不参与控制判定
string fault_detail
