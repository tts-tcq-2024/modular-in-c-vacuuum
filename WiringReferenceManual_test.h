#ifndef TEST_WIRING_REFERENCE_MANUAL_H
#define TEST_WIRING_REFERENCE_MANUAL_H

#include "WiringReferenceManual.h"

#ifdef __cplusplus
extern "C" {
#endif

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#ifdef __cplusplus
}
#endif

#endif // TEST_WIRING_REFERENCE_MANUAL_H
