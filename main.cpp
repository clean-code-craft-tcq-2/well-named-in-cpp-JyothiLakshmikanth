#include <iostream>
#include <assert.h>
#include "TestColorPair.h"

int main()
{
    TestColorPair test;
    test.testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    test.testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    test.testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    test.testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    test.printTheComibination(TelCoColorCoder::BLACK);
    return 0;
}
