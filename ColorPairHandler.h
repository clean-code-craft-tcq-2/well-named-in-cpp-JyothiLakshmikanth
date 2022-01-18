#ifndef COLORPAIRHANDLER_H_
#define COLORPAIRHANDLER_H_

#include <iostream>
#include "ColorInfos.h"

class ColorPairHandler
{
    public:
    ColorPairHandler(){}
   ~ColorPairHandler(){}

    TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) ;

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
