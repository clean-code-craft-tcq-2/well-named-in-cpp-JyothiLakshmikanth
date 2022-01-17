#include <iostream>
#include <assert.h>
#include "ColorPairHandler.h"
#include "ColorInfos.h"

//using namespace TelCoColorCoder;

class TestColorPair
{
	public:

	void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);

	void testPairToNumber( MajorColor major, MinorColor minor, int expectedPairNumber);
	
	private:
	ColorPairHandler m_colorPairHandler;
};
