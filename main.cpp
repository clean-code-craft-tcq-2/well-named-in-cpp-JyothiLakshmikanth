#include <iostream>
#include <assert.h>
#include "ColorInfos.h"
#include "TestColorPair.h"

typedef ::std::map<int,TelCoColorCoder::ColorPair> T_ColorPairMap;
T_ColorPairMap getTheCombination(TelCoColorCoder::MajorColor majorColor)
{
    T_ColorPairMap colorPairMap;
    for(int i = 0; i < TelCoColorCoder::numberOfMinorColors ; ++i)
    {
        TelCoColorCoder::MinorColor minorColor = (TelCoColorCoder::MinorColor)((i-1) % (TelCoColorCoder::numberOfMinorColors));
        int pairNumber = (majorColor * (TelCoColorCoder::numberOfMinorColors) + minorColor + 1);
        colorPairMap.insert({pairNumber, TelCoColorCoder::ColorPair(majorColor, minorColor)});) % (TelCoColorCoder::numberOfMinorColors));
    }
    return colorPairMap;
}

T_ColorPairMap getColorPairMap()
{
    T_ColorPairMap colorMap;
    for(int i=0;i<TelCoColorCoder::numberOfMajorColors ;++i)
    {
        colorMap = getTheCombination(MajorColorNames[i]);
    }
    return colorMap;
}

void printManual()
{
    T_ColorPairMap colorMap = getColorPairMap();
    T_ColorPairMap::const_iterator colorMapIt = colorMap.begin();
    for(; colorMapIt != colorMap.end(); ++colorMapIt)
    {
         ColorPair colorPair = colorMapIt->second
         ::std::cout<<colorMapIt->first<<" "<<colorPair.ToString().c_str()<<std::endl;
    }
}

int main()
{
    printManual();
    TestColorPair test;
    test.testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    test.testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    test.testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    test.testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
