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
		
		TEST_METHOD(isVectorNotNull)
		{
			Solution s = Solution();
			vector<int> valuesA = vector<int>(2);
			valuesA[0] = 1;
			valuesA[1] = 5;
			vector<int> valuesB = vector<int>({});
			s.mergeSortedArray(valuesA, 2, valuesB);
			Assert::IsNotNull(&valuesA , L"Vector A is not null", LINE_INFO());
			Assert::IsNotNull(&valuesB, L"Vector B is not null", LINE_INFO());
		}

		TEST_METHOD(expectedMergeWithAnEmptyVector)
		{
			Solution s = Solution();
			vector<int> valuesA = vector<int>(2);
			valuesA[0] = 1;
			valuesA[1] = 5;
			vector<int> valuesB = vector<int>({});
			s.mergeSortedArray(valuesA, 2, valuesB);
			vector<int> expectedResult = vector<int>({1, 5});
			Assert::IsTrue(valuesA.size() == 2, L"Length of vector is correct", LINE_INFO());
			for (int i = 0; i < valuesA.size(); i++)
			{
				Assert::IsTrue(valuesA[i] == expectedResult[i], L"Expected result ", LINE_INFO());
			}
		}

		TEST_METHOD(expectedMergeWithEqualVectors)
		{
			Solution s = Solution();
			vector<int> valuesA = vector<int>(6);
			valuesA[0] = 1;
			valuesA[1] = 5;
			valuesA[2] = 6;
			vector<int> valuesB = vector<int>({1, 5, 6});
			s.mergeSortedArray(valuesA, 3, valuesB);
			vector<int> expectedResult = vector<int>({ 1, 1, 5, 5, 6, 6 });
			Assert::IsTrue(valuesA.size() == 6, L"Length of vector is correct", LINE_INFO());
			for (int i = 0; i < valuesA.size(); i++)
			{
				Assert::IsTrue(valuesA[i] == expectedResult[i], L"Expected result ", LINE_INFO());
			}
		}

		TEST_METHOD(expectedMergeWithDifferentSizeVectors)
		{
			Solution s = Solution();
			vector<int> valuesA = vector<int>(5);
			valuesA[0] = 1;
			valuesA[1] = 5;
			vector<int> valuesB = vector<int>({0, 2, 7});
			s.mergeSortedArray(valuesA, 2, valuesB);
			vector<int> expectedResult = vector<int>({0, 1, 2, 5, 7 });
			Assert::IsTrue(valuesA.size() == 5, L"Length of vector is correct", LINE_INFO());
			for (int i = 0; i < valuesA.size(); i++)
			{
				Assert::IsTrue(valuesA[i] == expectedResult[i], L"Expected result ", LINE_INFO());
			}
		}
	};
}