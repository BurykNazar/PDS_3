#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab3_V1_2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            vector<vector<int>> F(N, vector<int>(N, 0));
            vector<int> B(N, 0);
            calcStirling(F, B);

            Assert::AreEqual(F[0][0], 1);
            Assert::AreEqual(F[1][0], 1);
            Assert::AreEqual(F[1][1], 1);
            Assert::AreEqual(F[2][0], 1);
            Assert::AreEqual(F[2][1], 3);
            Assert::AreEqual(F[2][2], 1);

            Assert::AreEqual(B[0], 1);
            Assert::AreEqual(B[1], 2);
            Assert::AreEqual(B[2], 5);
        }

        TEST_METHOD(TestMethod2)
        {
            vector<vector<int>> F(N, vector<int>(N, 0));
            vector<int> B(N, 0);
            calcStirling(F, B);

            bool check1 = checkStirDigit(F, 1, 1, 1);
            bool check2 = checkBellDigit(B, 1, 2);

            Assert::IsTrue(check1);
            Assert::IsTrue(check2);
        }

        TEST_METHOD(TestMethod3)
        {
            vector<vector<int>> F(N, vector<int>(N, 0));
            vector<int> B(N, 0);
            calcStirling(F, B);

            bool check3 = checkStirDigit(F, 3, 2, 6);
            bool check4 = checkBellDigit(B, 3, 15);

            Assert::IsTrue(check3);
            Assert::IsTrue(check4);
        }

    };
}
