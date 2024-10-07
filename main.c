#include <stdio.h>
#include "WiringReferenceManual.h"
#include "test_WiringReferenceManual.h"

int main()
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    PrintWiringReferenceManual();
    return 0;
}
