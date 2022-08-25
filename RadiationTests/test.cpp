#include "pch.h"
#include "../Radiation/RadiationDetector.h"

TEST(RadiationTest, AlphaTest) {
	RadiationDetector unit_under_test;

	EXPECT_EQ(unit_under_test.readAlp(), 1);
}