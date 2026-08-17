std_msgs/Header header

string[]  names
bool[] tactile_switch             # 触觉开关 (true=开启 false=关闭)
bool[] channel_reset              # 通道复位 (true触发, 执行时手指不可受力)
bool[] calibration_trigger        # 参数校准 (true触发, 执行约10s内数据不可用, 手指不可受力)
