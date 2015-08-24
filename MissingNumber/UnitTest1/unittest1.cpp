#include "stdafx.h"
#include "CppUnitTest.h"
#include "Solution.h"
#include "Solution.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestEmptyArray)
		{
			Solution s = Solution();
			vector<int> values = vector<int>({1});
			Assert::IsTrue(s.findMissingNumber(values) == 0, L"Expected value returned", LINE_INFO());
		}

		TEST_METHOD(TestLargeArray)
		{
			Solution s = Solution();
			vector<int> values = vector<int>({ 0, 1, 2, 3, 5 });
			Assert::IsTrue(s.findMissingNumber(values) == 4, L"Expected value returned", LINE_INFO());
			Assert::IsFalse(s.findMissingNumber(values) == 2, L"Expected value not returned", LINE_INFO());
		}

	};
}