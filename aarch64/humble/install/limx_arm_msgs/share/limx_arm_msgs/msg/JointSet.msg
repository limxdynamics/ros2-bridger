int64 stamp

string deviceid

# action
int32 ACTION_IDLE           = 0
int32 ACTION_START          = 1
int32 ACTION_PAUSE          = 2
int32 ACTION_RESUME         = 3
int32 ACTION_STOP           = 4
int32 ACTION_ENABLE_MOTOR   = 5
int32 ACTION_SET_ZERO       = 6
int32 ACTION_SET_LIMIT_MIN  = 7
int32 ACTION_SET_LIMIT_MAX  = 8
int32 ACTION_SET_POSITION   = 9
int32 ACTION_SET_MODE       = 10
int32 ACTION_SET_TOOL_SIZE  = 11
int32 ACTION_START_DRAG     = 12
int32 ACTION_STOP_DRAG      = 13
int32 ACTION_PLAYER_START   = 14
int32 ACTION_PLAYER_STOP    = 15
int32 ACTION_SET_CARTESIAN_POSITION = 16
int32 action

# 01位置控制，03速度模式，04电流模式 
int32 MODE_ANGLE    = 1
int32 MODE_VELOCITY = 3
int32 MODE_CURRENT  = 4
int32 mode

# data
float32[6] data
