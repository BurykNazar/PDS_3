#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab3_V1_1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(getArrangementsNoRepeat(6, 5), 720ull);
		}

		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(getArrangementsNoRepeat(5, 3), 60ull);
		}

		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(getArrangementsNoRepeat(7, 2), 42ull);
		}

		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(getArrangementsNoRepeat(4, 4), 24ull);
		}

		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(getArrangementsNoRepeat(0, 0), 0ull);
		}
	};
}
