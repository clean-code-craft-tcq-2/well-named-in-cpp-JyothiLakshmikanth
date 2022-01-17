#include <iostream>
#include "ColorInfos.h"

//using namespace TelCoColorCoder;

class ColorPairHandler
{
	public:
	ColorPairHandler();
	~ColorPairHandler();
	::TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber) {
    int zeroBasedPairNumber = pairNumber - 1;
   ::TelCoColorCoder::MajorColor majorColor = 
        (::TelCoColorCoder::MajorColor)(zeroBasedPairNumber / (TelCoColorCoder::getNumberOfMinorColors()));
    ::TelCoColorCoder::MinorColor minorColor =
        (::TelCoColorCoder::MinorColor)(zeroBasedPairNumber % (TelCoColorCoder::getNumberOfMinorColors()));
    return ::TelCoColorCoder::ColorPair(majorColor, minorColor);
}
	int GetPairNumberFromColor(::TelCoColorCoder::MajorColor major, ::TelCoColorCoder::MinorColor minor) {
    return major * (TelCoColorCoder::getNumberOfMinorColors()) + minor + 1;
}
};
