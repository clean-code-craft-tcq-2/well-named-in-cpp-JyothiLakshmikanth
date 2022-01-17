#include <iostream>
#include "ColorInfos.h"

class ColorPairHandler
{
	public:

	::TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber);
	int GetPairNumberFromColor(::TelCoColorCoder::MajorColor major, ::TelCoColorCoder::MinorColor minor) ;
};
