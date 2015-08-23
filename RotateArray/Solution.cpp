#include "stdafx.h"
#include "Solution.h"


void Solution::swap(vector<int>& nums, int i, int j)
{
	int aux = nums[i];
	nums[i] = nums[j];
	nums[j] = aux;
}

Solution::Solution()
{
}


Solution::~Solution()
{
}

void Solution::inverse(vector<int>& nums, int start, int end)
{
	while (start < end)
	{
		swap(nums, start++, end--);
	}
}

void Solution::rotateWithK(vector<int>& nums, int k)
{
	k = k % (nums.size());
	inverse(nums, 0, nums.size() - 1);
	inverse(nums, 0, k - 1);
	inverse(nums, k, nums.size() - 1);
}

void Solution::printVector(vector<int>& nums)
{
	printf("\n\n-----------\n");
	for (int i = 0; i < nums.size(); i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n-----------\n");

}

