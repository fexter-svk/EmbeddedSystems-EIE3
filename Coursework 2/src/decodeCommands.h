#ifndef _decodeCommands_h_
#define  _decodeCommands_h_

#include "rtos.h"
#include "messages.h"

extern volatile uint64_t newKey;

void serialISR();

extern void decode();
#endif