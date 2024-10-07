#ifndef WIRING_REFERENCE_MANUAL_H
#define WIRING_REFERENCE_MANUAL_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
#define MAX_COLORPAIR_NAME_CHARS = 16;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

#ifdef __cplusplus
extern "C" {
#endif

// Function declarations
void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void PrintWiringReferenceManual(void);

#ifdef __cplusplus
}
#endif

#endif  // WIRING_REFERENCE_MANUAL_H
