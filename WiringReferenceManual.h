#ifndef WIRING_REFERENCE_MANUAL_H
#define WIRING_REFERENCE_MANUAL_H
#define MAX_COLORPAIR_NAME_CHARS 16;

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
extern const char* MajorColorNames[];
extern const char* MinorColorNames[];


typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

// Function declarations
void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void PrintWiringReferenceManual(void);

#endif  // WIRING_REFERENCE_MANUAL_H
