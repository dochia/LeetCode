#include "stdafx.h"
#include "Solution.h"


Solution::Solution()
{
}

Solution::~Solution()
{

}

int Solution::findMissingNumber(vector<int>& nums)
{
	int n = nums.size();
	int sum = (n * (n + 1)) / 2;
	for (int i = 0; i < n; i++)
	{
		sum -= nums[i];
	}
	return sum;
}
