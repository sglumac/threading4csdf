/****************************************************************************
C implementation of Synchronous Data Flow (CSDF)

MIT License

Copyright (c) 2023 Slaven Glumac
****************************************************************************/

#ifndef THREADING4CSDF_H
#define THREADING4CSDF_H

#include <stddef.h>
#include <stdbool.h>

typedef bool (*CsdfTask)(void *taskData);
typedef void (*CsdfSleep)(unsigned int microseconds);
typedef bool (*CsdfCreateThread)(void *threadData, CsdfTask task, void *taskData);
typedef bool (*CsdfThreadJoin)(void *threadData);

typedef struct CsdfThreading
{
    size_t threadDataSize;
    CsdfSleep sleep;
    CsdfCreateThread createThread;
    CsdfThreadJoin joinThread;
    unsigned int microsecondsSleep;
} CsdfThreading;

#endif // THREADING4CSDF_H