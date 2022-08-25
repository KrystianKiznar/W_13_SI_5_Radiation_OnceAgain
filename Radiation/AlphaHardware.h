#pragma once
#include "AlphaInterface.h"
class AlphaHardware :
    public AlphaInterface
{
public:
    int alphaReader() override;
};

