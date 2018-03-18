#ifndef _decodeCommands_h_
#define  _decodeCommands_h_

#include "rtos.h"
#include "messages.h"

extern volatile uint64_t* key;
extern volatile int32_t   tar_velocity;
extern volatile int32_t   rotations;
extern volatile uint32_t  motorPWM;

void serialISR();

extern void decode();

#endif
