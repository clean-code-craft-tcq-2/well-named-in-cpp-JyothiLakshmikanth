#include <iostream>
#include "ColorInfos.h"

class ColorPairHandler
{
	public:
	ColorPairHandler();
	~ColorPairHandler();
	::TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber);
	int GetPairNumberFromColor(MajorColor major, MinorColor minor);
};
