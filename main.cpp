#include <iostream>
#include <assert.h>
#include "ColorPairHandler.h"

int main() {
	ColorPairHandler colorPairHandler;
    colorPairHandler.testNumberToPair(4, ::TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    colorPairHandler.testNumberToPair(5, ::TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    colorPairHandler.testPairToNumber(::TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    colorPairHandler.testPairToNumber(::TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
