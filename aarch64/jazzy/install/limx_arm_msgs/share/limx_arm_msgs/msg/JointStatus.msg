int64 stamp

string deviceid

int64 run_time

int32[6] enable
string[6] error
float32[6] zero
float32[6] limit_min
float32[6] limit_max
float32[3] tool_size

# 01位置控制，03速度模式，04电流模式 
int32 MODE_ANGLE    = 1
int32 MODE_VELOCITY = 3
int32 MODE_CURRENT  = 4
int32 mode

int32 STATE_IDLE      = 1
int32 STATE_STARTED   = 2
int32 STATE_PAUSED    = 3
int32 STATE_RESUMED   = 4
int32 STATE_STOPED    = 5
int32 STATE_SHUTDOWN  = 6
int32 state

int32 PLAY_STATE_IDLE      = 0
int32 PLAY_STATE_STARTED   = 1
int32 PLAY_STATE_FAILED    = 2
int32 PLAY_STATE_FINISHED  = 3
int32 play_state

string log_path
