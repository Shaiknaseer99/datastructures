#include<iostream>
#include<vector>
using namespace std;
/*Given an integer array, in-place sort it without using any inbuilt functions.

Input : [6, 3, 4, 8, 2, 9]
Output: [2, 3, 4, 6, 8, 9]

Input : [9, -3, 5, -2, -8, -6]
Output: [-8, -6, -3, -2, 5, 9]

*/

class Solution
{
public:
	void sort(vector<int> &nums)
	{
		// Write your code here...
		// without using the inplace sort 
		int n = nums.size();
		for(int i = 0 ;i<n ;i++)
		{
			for(int j =i+1 ; j<n ; j++)
			{
				if(nums[i]>nums[j])
				{
					int temp = nums[i];
					nums[i] = nums[j];
					nums[j] = temp;
				}
			}
		}
		// time complexity is : O(n^2)
		// space complexity is : O(1)
		// can be done better by using the selection or insertion sort
	}
};

