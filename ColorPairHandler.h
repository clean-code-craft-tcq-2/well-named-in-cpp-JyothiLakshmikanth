#include <iostream>
#include "ColorInfos.h"
using namespace TelCoColorCoder{getNumberOfMinorColors();};
class ColorPairHandler
{
	public:

	::TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber);
	int GetPairNumberFromColor(::TelCoColorCoder::MajorColor major, ::TelCoColorCoder::MinorColor minor) ;
	void testNumberToPair(int pairNumber, ::TelCoColorCoder::MajorColor expectedMajor, ::TelCoColorCoder::MinorColor expectedMinor);

	void testPairToNumber( ::TelCoColorCoder::MajorColor major, ::TelCoColorCoder::MinorColor minor, int expectedPairNumber);
	
};
