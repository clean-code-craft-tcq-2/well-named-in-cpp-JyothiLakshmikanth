#ifndef COLORPAIRHANDLER_H_
#define COLORPAIRHANDLER_H_

#include <iostream>
#include <map>
#include "ColorInfos.h"

class ColorPairHandler
{
    public:
    ColorPairHandler(){}
   ~ColorPairHandler(){}

    typedef ::std::map<int,TelCoColorCoder::ColorPair> T_ColorPairMap;

    TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) ;
    T_ColorPairMap GetTheComibination(TelCoColorCoder::MajorColor majorColor);

};
#endif
TelCoColorCoder::ColorPair ColorPairHandler::GetColorFromPairNumber(int pairNumber)
{
    int zeroBasedPairNumber = pairNumber - 1;
    TelCoColorCoder::MajorColor majorColor = (TelCoColorCoder::MajorColor)(zeroBasedPairNumber / (TelCoColorCoder::numberOfMinorColors));
    TelCoColorCoder::MinorColor minorColor = (TelCoColorCoder::MinorColor)(zeroBasedPairNumber % (TelCoColorCoder::numberOfMinorColors));
    return TelCoColorCoder::ColorPair(majorColor, minorColor);
}

int ColorPairHandler::GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor)
{
    return (major * (TelCoColorCoder::numberOfMinorColors) + minor + 1);
}

ColorPairHandler::T_ColorPairMap ColorPairHandler::GetTheComibination(TelCoColorCoder::MajorColor majorColor)
{
    ColorPairHandler::T_ColorPairMap colorPairMap;
    for(int i = 0; i< TelCoColorCoder::numberOfMinorColors; ++i)
    {
        TelCoColorCoder::MinorColor minorColor = (TelCoColorCoder::MinorColor)((i) % (TelCoColorCoder::numberOfMinorColors));
        int pairNumber = GetPairNumberFromColor(majorColor, minorColor);
        colorPairMap.insert({pairNumber, TelCoColorCoder::ColorPair(majorColor, minorColor)});
    }
    return colorPairMap;
}
