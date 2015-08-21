// RemoveDuplicates.cpp : main project file.

#include "stdafx.h"
#include <vector>

using namespace System;
using namespace std;
int removeDuplicates(vector<int>& nums)
{
	if (nums.size() == 0)
		return 0;
	int newLength = 0;
	int aux = nums[0];
	unsigned int i ;
	bool first_one = true;
	for (i = 1; i < nums.size(); i++)
	{
		if (nums[i] == aux)
		{
			newLength++;
			first_one = false;
		}
		else if (!first_one)
		{
			nums[newLength] = nums[i];
			aux = nums[i];
		}
	}
	if (i == nums.size() && newLength == 0)
		newLength = i;
	return newLength;
}

int removeDuplicates1(vector<int>& nums)
{
	if (nums.size() == 0)
		return 0;
	unsigned int i = 0, j = 1; 
	int aux = nums[i];
	while (j < nums.size())
	{
		if (aux != nums[j])
		{
			i++;
			nums[i] = nums[j];
			aux = nums[i];	
		}
		j++;
	}
	i++;
	return i;
}

void test()
{
	unsigned int i;
	printf("\n \n{1, 1, 2, 3, 4, 4, 4, 4} \n");
	vector<int> values1 = vector<int>({ 1, 1, 2, 3, 4, 4, 4, 4 });
	printf("%d \n", removeDuplicates1(values1));
	for (i = 0; i < values1.size(); i++)
		printf("%d ", values1[i]);

	printf("\n\n {1, 2, 3, 3, 5} \n");
	vector<int> values3 = vector<int>({ 1, 2, 3, 3, 5 });
	printf("%d \n", removeDuplicates1(values3));
	for (i = 0; i < values3.size(); i++)
		printf("%d ", values3[i]);

	printf("\n \n{} \n");
	vector<int> values4 = vector<int>({});
	printf("%d \n", removeDuplicates1(values4));
	for (i = 0; i < values4.size(); i++)
		printf("%d ", values4[i]);

	printf("\n\n {1, 2, 3, 4, 5} \n");
	vector<int> values2 = vector<int>({ 1, 2, 3, 4, 5 });
	printf("%d \n", removeDuplicates1(values2));
	for (i = 0; i < values2.size(); i++)
		printf("%d ", values2[i]);
}
int main()
{
    Console::WriteLine(L"Hello World");
	test();

    return 0;
}
