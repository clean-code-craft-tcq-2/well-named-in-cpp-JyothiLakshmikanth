#include <iostream>
#include <assert.h>
#include <map>
#include "ColorInfos.h"
#include "TestColorPair.h"

typedef ::std::map<int,TelCoColorCoder::ColorPair> T_ColorPairMap;
T_ColorPairMap colorPairMap;
void updatecolorMap(TelCoColorCoder::MajorColor majorColor)
{
    for(int i = 0; i < TelCoColorCoder::numberOfMinorColors ; ++i)
    {
        TelCoColorCoder::MinorColor minorColor = (TelCoColorCoder::MinorColor)((i) % (TelCoColorCoder::numberOfMinorColors));
        int pairNumber = (majorColor * (TelCoColorCoder::numberOfMinorColors) + minorColor + 1);
        colorPairMap.insert({pairNumber, TelCoColorCoder::ColorPair(majorColor, minorColor)});
    }
}

void getColorPairMap()
{
    T_ColorPairMap colorMap;
    for(int i=0;i<TelCoColorCoder::numberOfMajorColors ;++i)
    {
        TelCoColorCoder::MajorColor majorcolor = (TelCoColorCoder::MajorColor)((i) % (TelCoColorCoder::numberOfMajorColors));
        updatecolorMap(majorcolor);
    }
}

void printManual()
{
    getColorPairMap();
    T_ColorPairMap::const_iterator colorMapIt = colorPairMap.begin();
    for(; colorMapIt != colorPairMap.end(); ++colorMapIt)
    {
         TelCoColorCoder::ColorPair colorPair = colorMapIt->second;
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
