#include "RadiationDetector.h"

int RadiationDetector::readAlp()
{
    const auto x = alphaInterface->alphaReader();
    return x;
}
