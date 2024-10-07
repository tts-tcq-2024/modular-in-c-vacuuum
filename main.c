#include <stdio.h>
#include "WiringReferenceManual.h"
#include "WiringReferenceManual_test.h"

int main()
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    FormatWiringReferenceManual();
    return 0;
}
