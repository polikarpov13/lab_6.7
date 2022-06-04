#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/6/lab_6.7/lab_6.7/lab_6.7.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array a = { new int[3]{ 9, 8, 1 }, 3 };
			Array b = { new int[3]{ 8, 9, 0}, 3 };

			Array r = Merge_if(a, b);

			Assert::AreEqual(*(r.start), 9);
		}
	};
}
