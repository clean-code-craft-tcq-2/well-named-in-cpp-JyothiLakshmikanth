#include "ColorPairHandler.h"

::TelCoColorCoder::ColorPair ColorPairHandler::GetColorFromPairNumber(int pairNumber) {
    int zeroBasedPairNumber = pairNumber - 1;
   ::TelCoColorCoder::MajorColor majorColor = 
        (::TelCoColorCoder::MajorColor)(zeroBasedPairNumber / (::TelCoColorCoder::getNumberOfMinorColors()));
    ::TelCoColorCoder::MinorColor minorColor =
        (::TelCoColorCoder::MinorColor)(zeroBasedPairNumber % (::TelCoColorCoder::getNumberOfMinorColors()));
    return ::TelCoColorCoder::ColorPair(majorColor, minorColor);
}

int ColorPairHandler::GetPairNumberFromColor(::TelCoColorCoder::MajorColor major, ::TelCoColorCoder::MinorColor minor) {
    return major * ::TelCoColorCoder::getNumberOfMinorColors() + minor + 1;
}
