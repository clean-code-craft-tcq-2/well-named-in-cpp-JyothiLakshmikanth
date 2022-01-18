// #include "ColorPairHandler.h"

// ::TelCoColorCoder::ColorPair ColorPairHandler::GetColorFromPairNumber(int pairNumber)
// {
//     int zeroBasedPairNumber = pairNumber - 1;
//     ::TelCoColorCoder::MajorColor majorColor = (::TelCoColorCoder::MajorColor)(zeroBasedPairNumber / (TelCoColorCoder::numberOfMinorColors));
//     ::TelCoColorCoder::MinorColor minorColor = (::TelCoColorCoder::MinorColor)(zeroBasedPairNumber % (TelCoColorCoder::numberOfMinorColors));
//     return ::TelCoColorCoder::ColorPair(majorColor, minorColor);
// }

// int ColorPairHandler::GetPairNumberFromColor(::TelCoColorCoder::MajorColor major, ::TelCoColorCoder::MinorColor minor)
// {
//     return major * (TelCoColorCoder::numberOfMinorColors) + minor + 1;
// }

// void ColorPairHandler::testNumberToPair(int pairNumber, ::TelCoColorCoder::MajorColor expectedMajor, ::TelCoColorCoder::MinorColor expectedMinor)
// {
//    ::TelCoColorCoder::ColorPair colorPair = GetColorFromPairNumber(pairNumber);
//     std::cout << "Got pair " << colorPair.ToString() << std::endl;
//     assert(colorPair.getMajor() == expectedMajor);
//     assert(colorPair.getMinor() == expectedMinor);
// }

// void ColorPairHandler::testPairToNumber(::TelCoColorCoder::MajorColor major, ::TelCoColorCoder::MinorColor minor, int expectedPairNumber)
// {
//     int pairNumber = GetPairNumberFromColor(major, minor);
//     std::cout << "Got pair number " << pairNumber << std::endl;
//     assert(pairNumber == expectedPairNumber);
// }
