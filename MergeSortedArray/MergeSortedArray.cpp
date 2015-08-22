// MergeSortedArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Solution.h"

int main()
{
	Solution s = Solution();
	vector<int> valuesA = vector<int>(2);
	valuesA[0] = 1;
	valuesA[1] = 5;
	vector<int> valuesB = vector<int>({});
	s.mergeSortedArray(valuesA, 2, valuesB);
	s.printVector(valuesA);
    return 0;
}

