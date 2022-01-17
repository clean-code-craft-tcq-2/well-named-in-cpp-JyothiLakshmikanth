#include "ColorPairHandler.h"

ColorPair ColorPairHandler::GetColorFromPairNumber(int pairNumber) {
    int zeroBasedPairNumber = pairNumber - 1;
    MajorColor majorColor = 
        (MajorColor)(zeroBasedPairNumber / TelCoColorCoder::getNumberOfMinorColors());
    MinorColor minorColor =
        (MinorColor)(zeroBasedPairNumber % TelCoColorCoder::getNumberOfMinorColors());
    return ColorPair(majorColor, minorColor);
}

int ColorPairHandler::GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    return major * TelCoColorCoder::getNumberOfMinorColors() + minor + 1;
}
