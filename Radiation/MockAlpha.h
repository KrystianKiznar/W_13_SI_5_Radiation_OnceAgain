#pragma once
#include "AlphaInterface.h"
#include "gmock/gmock.h"


class MockAlpha :
    public AlphaInterface
{
public:
    MOCK_METHOD(int, alphaReader, (), (override));

};

