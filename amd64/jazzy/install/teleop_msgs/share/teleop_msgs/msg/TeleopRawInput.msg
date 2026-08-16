# 操作者控制器的原始输入量。
# 发送方不解释任何按键含义，组合键语义一律由接收方解释。

# 模拟量，范围 0.0 ~ 1.0
float32 left_trigger
float32 right_trigger
float32 left_grip
float32 right_grip

# 摇杆，[x, y]，范围 -1.0 ~ 1.0
float32[2] left_stick
float32[2] right_stick

# 按键位掩码。预留高位，新增按键不需要改本消息。
uint32 BTN_LEFT_X=1
uint32 BTN_LEFT_Y=2
uint32 BTN_RIGHT_A=4
uint32 BTN_RIGHT_B=8
uint32 BTN_LEFT_STICK=16         # 左摇杆按下
uint32 BTN_RIGHT_STICK=32        # 右摇杆按下
uint32 BTN_LEFT_GRIP=64          # 左 Grip 的布尔态
uint32 BTN_RIGHT_GRIP=128        # 右 Grip 的布尔态
uint32 BTN_LEFT_TRIGGER=256      # 左扳机的布尔态
uint32 BTN_RIGHT_TRIGGER=512     # 右扳机的布尔态
uint32 BTN_LEFT_THUMBREST=1024
uint32 BTN_RIGHT_THUMBREST=2048
uint32 buttons

# 哪些按键位本帧有效。设备不提供的按键，对应位为 0。
# 接收方不得把「设备未提供」当成「按键未按下」。
uint32 buttons_valid
