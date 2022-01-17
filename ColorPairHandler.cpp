#include "ColorPairHandler.h"

ColorPair ColorPairHandler::GetColorFromPairNumber(int pairNumber) {
    int zeroBasedPairNumber = pairNumber - 1;
   MajorColor majorColor = 
        (MajorColor)(zeroBasedPairNumber / getNumberOfMinorColors());
    MinorColor minorColor =
        (MinorColor)(zeroBasedPairNumber % getNumberOfMinorColors());
    return ColorPair(majorColor, minorColor);
}

int ColorPairHandler::GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    return major * getNumberOfMinorColors() + minor + 1;
}
