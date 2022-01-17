#include <iostream>
#include <assert.h>
#include "ColorPairHandler.h"
#include "ColorInfos.h"

using namespace TelCoColorCoder;

class TestColorPair
{
	public:

	void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor);

	void testPairToNumber( TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber);
	
	private:
	ColorPairHandler m_colorPairHandler;
};
