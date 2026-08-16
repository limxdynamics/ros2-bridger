# special topic_ids
uint32 ID_PUBLISHER=0
uint32 ID_SUBSCRIBER=1
uint32 ID_SERVICE_SERVER=2
uint32 ID_SERVICE_CLIENT=4
uint32 ID_MROSTOPIC_REQUEST=6
uint32 ID_REMOVE_PUBLISHER=7
uint32 ID_REMOVE_SUBSCRIBER=8
uint32 ID_REMOVE_SERVICE_SERVER=9
uint32 ID_REMOVE_SERVICE_CLIENT=11
uint32 ID_MROSSERVICE_REQUEST=13
uint32 ID_LOG=14
uint32 ID_TIME=15
uint32 ID_NEGOTIATED=16
uint32 ID_SESSION_ID=17
uint32 ID_ASHMEM_INFO=18
uint32 ID_DIAG=19

# The endpoint ID for this topic
uint32 topic_id

string topic_name
string message_type

# MD5 checksum for this message type
string md5sum

# size of the buffer message must fit in
int32 buffer_size

bool negotiated

# node name
string node

# definition
string definition

# latch
bool latch

# reliable
bool reliable

# queue_size
int32 queue_size

# enabled
int32 enabled
