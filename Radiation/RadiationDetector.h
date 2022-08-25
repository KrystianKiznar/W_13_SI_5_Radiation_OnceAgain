#pragma once
#include "AlphaInterface.h"
#include "AlphaHardware.h"
#include <iostream>
#include "gtest/gtest.h"

class RadiationDetector
{
public:
	std::shared_ptr<AlphaInterface> alphaInterface = std::make_shared<AlphaHardware>();

	int readAlp();
};

