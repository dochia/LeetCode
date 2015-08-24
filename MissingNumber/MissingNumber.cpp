// MissingNumber.cpp : main project file.

#include "stdafx.h"
#include "Solution.h"

using namespace System;

int main()
{
    Console::WriteLine(L"Hello World");
	vector<int> values = vector<int>({ 0, 1, 2, 3, 4, 5, 6, 7 });
	Solution s = Solution();
	printf("%d ", s.findMissingNumber(values));

    return 0;
}
