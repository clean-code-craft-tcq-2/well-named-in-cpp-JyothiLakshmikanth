#include <iostream>
#include "ColorInfos.h"

using namespace TelCoColorCoder;

class ColorPairHandler
{
	public:
	ColorPairHandler();
	~ColorPairHandler();
	ColorPair GetColorFromPairNumber(int pairNumber);
	int GetPairNumberFromColor(MajorColor major, MinorColor minor);
};
