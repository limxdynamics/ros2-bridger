# 会话中单个肢体的决策状态。
# 作为 TeleopSessionState.limbs 的元素使用。

# 肢体名。与 TeleopTarget.name 取值一致。
string name

# 该肢体本周期是否处于跟随
bool following

# 该侧末端是否允许无极开合。
# 门控由发布方负责，扳机行程到开合程度的映射由接收方负责。
bool ee_closure_enabled

# 该侧末端当前手势索引。
# 循环切换与持久化由发布方负责，下发对应手势由接收方负责。
uint8 ee_gesture_index
