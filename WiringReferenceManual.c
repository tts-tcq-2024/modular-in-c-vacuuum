#include <stdio.h>
#include "WiringReferenceManual.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer)
{
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber)
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair)
{
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

void PrintWiringReferenceManual(void)
{
    for(int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) 
    {
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
        ColorPairToString(&colorPair, colorPairNames);
        printf("%d\t%s\n", pairNumber, colorPairNames);
    }
}