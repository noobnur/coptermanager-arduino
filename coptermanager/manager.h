#ifndef MANAGER_H
#define MANAGER_H

#define NUM_COPTERS 2

enum Command {
    COPTER_BIND       = 0x01,
    COPTER_THROTTLE   = 0x02,
    COPTER_RUDDER     = 0x03,
    COPTER_AILERON    = 0x04,
    COPTER_ELEVATOR   = 0x05,
    COPTER_LED        = 0x06,
    COPTER_FLIP       = 0x07,
    COPTER_VIDEO      = 0x08,
    COPTER_EMERGENCY  = 0x09,
    COPTER_DISCONNECT = 0x0A
};

enum ResultCode {
    PROTOCOL_OK = 0x00,
    PROTOCOL_INVALID_COPTER_TYPE = 0xF0,
    PROTOCOL_ALL_SLOTS_FULL = 0xF1,
    PROTOCOL_INVALID_SLOT = 0xF2,
    PROTOCOL_EMERGENCY_MODE_ON = 0xF3,
    PROTOCOL_UNKNOWN_COMMAND = 0xF4
};

void manager_init();
int manager_processcommand(int copterid, int command, int value);
void manager_loop();

#endif

