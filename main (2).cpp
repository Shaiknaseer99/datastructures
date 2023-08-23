/*

Given a binary array, in-place sort it in linear time and constant space. The output should contain all zeroes, followed by all ones.

Input : [1, 0, 1, 0, 1, 0, 0, 1]
Output: [0, 0, 0, 0, 1, 1, 1, 1]

Input : [1, 1]
Output: [1, 1]

*/

class Solution
{
public:
	void sortArray(vector<int> &nums)
	{
	   //sort(nums.begin(),nums.end());  // time complexity is : O(nlogn)
	   int n = nums.size();
	   int i = 0;
	   for(int j = 0 ; j<n ;j++)
	   {
	   	if(nums[j]!=1)
	   	{
	   		int temp = nums[j];
	   		nums[j]=nums[i];
	   		nums[i] = temp;
	   		i++;
	   		
	   	}
	   }
	   // time complexity  is : O(n)
	   // space complexity is : O(1)
	}
};
