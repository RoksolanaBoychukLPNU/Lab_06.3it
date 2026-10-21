#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.3it/Lab_06.3it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
    TEST_CLASS(UnitTest631)
    {
    public:
        TEST_METHOD(TestMaxEvenFunction)
        {
            int a[6] = { 3, -8, 14, 7, 22, 21 };
            int m;
            Assert::IsTrue(MaxEven(a, 6, m));
            Assert::AreEqual(22, m);
        }

        TEST_METHOD(TestMaxEvenTemplate)
        {
            long long a[5] = { -7, -12, -4, 9, -30 };
            long long m;
            Assert::IsTrue(MaxEven<long long>(a, 5, m));
            Assert::AreEqual(-4LL, m);
        }

        TEST_METHOD(TestNoEven)
        {
            int a[3] = { 1, 3, -5 };
            int m;
            Assert::IsFalse(MaxEven<int>(a, 3, m));
        }
    };
}
