#include <stdio.h>
#include "WiringReferenceManual.h"

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
const int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void ColorPairToString(const ColorPair* colorPair, char* buffer)
{
    sprintf(buffer, "%s %s", MajorColorNames[colorPair->majorColor],MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber)
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair)
{
    return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}

void FormatWiringReferenceManual(void) 
{
    // Print header for the manual
    printf("Pair Number\tMajor Color\tMinor Color\n");
    printf("-----------\t-----------\t-----------\n");

    // Loop through each pair and print the color names
    for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) 
    {
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
        ColorPairToString(&colorPair, colorPairNames);
        
        // Break the color pair into major and minor for easier readability
        printf("%d\t\t%s\t\t%s\n", 
               pairNumber, 
               MajorColorNames[colorPair.majorColor], 
               MinorColorNames[colorPair.minorColor]);
    }
}
