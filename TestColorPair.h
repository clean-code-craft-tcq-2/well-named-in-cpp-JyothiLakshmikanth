#ifndef TESTCOLORPAIR_H_
#define TESTCOLORPAIR_H_

#include <iostream>
#include <assert.h>
#include <map>
#include "ColorInfos.h"
#include "ColorPairHandler.h"
class TestColorPair
 {
    public:
    TestColorPair(){}
   ~TestColorPair(){}

    typedef ::std::map<int,TelCoColorCoder::ColorPair> T_ColorPairMap;
    void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor,TelCoColorCoder::MinorColor expectedMinor);
    void testPairToNumber( TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber);
    void printTheComibination( TelCoColorCoder::MajorColor major);
	
 };
#endif

void TestColorPair::testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor)
{
    ColorPairHandler colorPairHandler;
    TelCoColorCoder::ColorPair colorPair = colorPairHandler.GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString().c_str() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void TestColorPair::testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber)
{
    ColorPairHandler colorPairHandler;
    int pairNumber = colorPairHandler.GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

void TestColorPair::printTheComibination(TelCoColorCoder::MajorColor major)
{
    ColorPairHandler colorPairHandler;
    T_ColorPairMap pair = colorPairHandler.GetTheComibination(major);
    T_ColorPairMap::const_iterator pairIt = pair.begin();
    for(;pairIt!= pair.end();++pairIt)
    {
        TelCoColorCoder::ColorPair colorPair = pairIt->second;
        std::cout << pairIt->first<<" " << colorPair.ToString().c_str() <<std::endl;
    }
}
