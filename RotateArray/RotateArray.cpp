// RotateArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Solution.h"

int main()
{
	Solution s = Solution();
	vector<int> values = vector<int>({1, 2, 3, 4, 5, 6, 7, 8});
	s.rotateWithK(values, 11);
	//s.inverse(values, 2, values.size());
	s.printVector(values);
    return 0;
}

