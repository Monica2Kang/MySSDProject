#include "gmock/gmock.h"
#include "SSDCmdParser.h"
#include <iostream>

int main(int argc, const char* argv[]) {
#ifndef _DEBUG
	SSDCmdParser parser;
	string result = parser.checkParsing(argc, argv);
	std::cout << result << "\n";
	return 0;
#else
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
#endif // !1
}