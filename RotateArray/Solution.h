#pragma once
#include <vector>

using namespace std;

class Solution
{
private:
	void swap(vector<int>& nums, int i, int j);
public:
	Solution();
	~Solution();

	void inverse(vector<int>& nums, int start, int end);
	void rotateWithK(vector<int>& nums, int k);
	void printVector(vector<int>& nums);
};

