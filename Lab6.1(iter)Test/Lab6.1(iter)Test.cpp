#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab61iterTest
{
	TEST_CLASS(Lab61iterTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int a = 4;
			int c[a] = { 1, 1, 1, 1 };
			t = arrSum(c, a, 0);
			Assert::AreEqual(t, 4);
		}
	};
}
