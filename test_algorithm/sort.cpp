#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	void BubbleSort(vector<int>& num)
	{
		int size = num.size();
		for (int end = size - 1; end > 0; --end)
		{
			for (int i = 0; i < end; ++i)
			{
				if (num[i] > num[i + 1])
					swap(num[i], num[i + 1]);
			}
		}
	}
};