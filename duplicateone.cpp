#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution
{
public:
	int findDuplicateElement(vector<int> const &nums)
	{
		// Write your code here...
		int ans;
		int n =nums.size();
		map<int,int> mpp;
		for(int  i =0 ; i<n ;i++)
		{
			mpp[nums[i]]++;
		}
		// traversin and finding the element which is repeated
		for(auto it:mpp)
		{
			if(it.second>1)
			{
			  ans = it.first;
				
			}
		}
		// time com:O(n) // space com : O(n)
		return ans;
	}
};
int main()
{
	// sorting approach and travering and finding the beside element 
	// if the current  and beside element are same then that is the repeating element 
	// time complexity is : O(n^2)+O(n)
	// space complexity is : O(1);
	// for the better approach we can also use the xor operator works if the singlr element is repeated
    int arr[6]={1,3,2,4,8,7};
    for(int i =0 ;i<6;i++)
	{
		for(int j = i+1 ; j<6 ;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[j];
				arr[j]=arr[i];
				arr[i] = temp;
			}
		}
	}
	for(int it : arr)
	{
		cout<<it<<" ";
	}
	// optimal solution using the  xor operator 
	// if only the one element is repeating take the xor operator 
	/*

Given an integer array of size `n` containing elements between 1 and `n-1` with one element repeating, find the duplicate number in it using constant space.

Input: [1, 2, 3, 4, 4]
Output: 4

Input: [1, 2, 3, 4, 2]
Output: 2

Input: [1, 1]
Output: 1

Assume valid input.

*/

class Solution
{
public:
	int findDuplicateElement(vector<int> const &nums)
	{
		// Write your code here...
		int ans =0 ;
		int n =nums.size();
		
	   // taking the xor of the elemnets 
	   for(int i =0 ; i<n ;i++)
	   {
	   	 ans = ans^nums[i];
	   }
	   // taking the xor of the numbers in the range 
	   for(int i = 1 ; i<=n-1;i++)
	   {
	   	 ans = ans^i;
	   }
		return ans;
	}
};













	return 0 ;
}
