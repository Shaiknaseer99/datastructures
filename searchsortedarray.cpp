#include<iostream>
#include<vector>
using namespace std;
//brute force approach 
/*

Given a sorted integer array and a target, determine if the target exists in the array in logarithmic time. If target exists in the array, the procedure should return the index of it.

Input: nums[] = [2, 3, 5, 7, 9], target = 7
Output: 3
Explanation: Element found at 4th (index 3) position

• If there are duplicate elements in the array, the procedure may return any index whose element is equal to the target.

Input: nums[] = [1, 2, 3, 4, 4, 5, 6, 7], target = 4
Output: 3 (or 4)
Explanation: Element found at the 4th (index 3) or 5th (index 4) position.

• If the target is not located, the procedure should return -1.

Input: nums[] = [1, 4, 5, 8, 9], target = 2
Output: -1

*/

class Solution
{
public:
	int findIndex(vector<int> const &nums, int target)
	{
		// brute force approach 
		int n = nums.size();
		int ans = -1;
		for(int i = 0 ; i<n ;i++)
		{
			if(nums[i]==target)
			{
				ans = i;
			}
		}
		return ans;
        // the  time complexity is : O(n)
// can be reduced to logn using the concept of the binary search on the answers 
	}
};
// optimal approach
/*

Given a sorted integer array and a target, determine if the target exists in the array in logarithmic time. If target exists in the array, the procedure should return the index of it.

Input: nums[] = [2, 3, 5, 7, 9], target = 7
Output: 3
Explanation: Element found at 4th (index 3) position

• If there are duplicate elements in the array, the procedure may return any index whose element is equal to the target.

Input: nums[] = [1, 2, 3, 4, 4, 5, 6, 7], target = 4
Output: 3 (or 4)
Explanation: Element found at the 4th (index 3) or 5th (index 4) position.

• If the target is not located, the procedure should return -1.

Input: nums[] = [1, 4, 5, 8, 9], target = 2
Output: -1

*/

class Solution
{
public:
	int findIndex(vector<int> const &nums, int target)
	{
		// brute force approach 
		int n = nums.size();
		int ans = -1;
		int low=0 ;
		int high= n-1;
		while(low<=high)
		{
			int mid = (low+high)/2;
			if(nums[mid]==target)
			{
				ans = mid;
				
			}
			else if( nums[mid]<target)
			{
				low = mid+1;
			}
			else
			{
				high = mid-1;
			}
		}
		return ans;
	}
};


int main()
{
    return 0 ;
}