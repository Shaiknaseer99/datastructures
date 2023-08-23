#include<iostream>
#include<vector>
using namespace std;
/*

Given an integer array, in-place reverse it without using any inbuilt functions.

Input : [1, 2, 3, 4, 5]
Output: [5, 4, 3, 2, 1]

*/

class Solution
{
public:
	void reverseArray(vector<int> &nums)
	{
		// i can also use the reverse method  available in cpp 
		//reverse(nums,nums+n)  // time complexity is O(n)
		int n = nums.size();
		int start = 0;
		int end = n-1;
		while(start<end)
		{
			int temp = nums[start];
			nums[start]=nums[end];
			nums[end] = temp;
			start++;
			end--;
		}
		// time compelxity  is : O(log n )
	}
};

int main()
{
    return 0;
}

