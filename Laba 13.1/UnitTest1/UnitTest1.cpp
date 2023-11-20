#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		double dod(double a, double n, double x) {
			return a *= (2 * n - 1) / (2 * n * x * x + x * x);
		}
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = dod(1.0, 2.0, 3.0);
			Assert::AreEqual(t, 0.0666667, 0.1);
		}
	};
}
