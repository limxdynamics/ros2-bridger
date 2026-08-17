std_msgs/Header header
float32[16] eyePose  # 眼镜位置姿态矩阵 4x4
float32[16] l   # 左手柄姿态矩阵 4x4
float32[16] r   # 右手柄姿态矩阵 4x4

float32[2] leftJS # 左摇杆
float32 leftTrig  # 左扳机
float32 leftGrip  # 左 Grip 键
bool LThU  # 左拇指（布尔值）
bool LTr   # 左扳机（布尔值）
bool LG    # 左 Grip 键（布尔值）
bool X     # X 键
bool Y     # Y 键

float32[2] rightJS  # 右摇杆
float32 rightTrig   # 右扳机
float32 rightGrip   # 右 Grip 键
bool RThU  # 右拇指（布尔值）
bool RTr   # 右扳机（布尔值）
bool RG    # 右 Grip 键（布尔值）
bool A     # A 键
bool B     # B 键
