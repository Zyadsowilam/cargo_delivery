#pragma once
#include "Events.h"
class CancellationEvent :
    public Events
{
public:
    CancellationEvent();
    ~CancellationEvent();
};

