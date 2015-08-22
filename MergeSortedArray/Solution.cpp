#include "stdafx.h"
#include "Solution.h"


Solution::Solution()
{
}


Solution::~Solution()
{
}

void Solution::mergeSortedArray(vector<int>& nums1, int end, vector<int>& nums2)
{
	int k = nums1.size() - 1;
	int i = end - 1;
	int j = nums2.size() - 1;
	while ((i >= 0) && (j >= 0))
	{
		if (nums1[i] <= nums2[j])
		{
			nums1[k--] = nums2[j--];
		}
		else if (nums2[j] < nums1[i])
		{
			nums1[k--] = nums1[i--];
		}
	}
	while (i >= 0 && j < 0)
	{
		nums1[k--] = nums1[i--];
	}
	while (j >= 0 && i < 0)
	{
		nums1[k--] = nums2[j--];
	}
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

