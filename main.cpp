#include <iostream>
#include <assert.h>
#include <TestColorPair.h>

using namespace TelCoColorCoder;

int main() {
	TestColorPair testColorPair;
    testColorPair.testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testColorPair.testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testColorPair.testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testColorPair.testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
