/*

Given an integer array, find a pair with the maximum product in it.

Each input can have multiple solutions. The output should match with either one of them.

Input : [-10, -3, 5, 6, -2]
Output: (-10, -3) or (-3, -10) or (5, 6) or (6, 5)

Input : [-4, 3, 2, 7, -5]
Output: (3, 7) or (7, 3)

If no pair exists, the solution should return the pair (-1, -1).

Input : [1]
Output: (-1, -1)

*/

class Solution
{
public:
	pair<int,int> findPair(vector<int> const &nums)
	{
	    pair<int,int> ans(-1,-1);
	    int n = nums.size();
	    int max = INT_MIN;
	    for(int i = 0 ; i<n ;i++)
	    {
	    	for(int j = i+1 ; j<n ;j++)
	    	{
	    		int p = nums[i]*nums[j];
	    		if(p>max)
	    		{
	    			max=p;
	    			ans.first=nums[i];
	    			ans.second=nums[j];
	    		}
	    	}
	    }
	    return ans;
	}
};