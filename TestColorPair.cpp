#include "TestColorPair.h"

void TestColorPair::testNumberToPair(int pairNumber,
   MajorColor expectedMajor,
    MinorColor expectedMinor)
{
   ColorPair colorPair =
        m_colorPairHandler.GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void TestColorPair::testPairToNumber(
    MajorColor major,
    MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = m_colorPairHandler.GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
