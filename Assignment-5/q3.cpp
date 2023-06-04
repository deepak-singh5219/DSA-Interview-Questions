// Given an integer array nums sorted in **non-decreasing** order, return *an array of **the squares of each number** sorted in non-decreasing order*.

// **Example 1:**

// **Input:** nums = [-4,-1,0,3,10]

// **Output:** [0,1,9,16,100]

// **Explanation:** After squaring, the array becomes [16,1,0,9,100].

// After sorting, it becomes [0,1,9,16,100].

#include<bits/stdc++.h>
using namespace std;

    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int k = n-1;

        vector<int> ans(n);

        while(i<=j)
        {
             if(abs(nums[i])>abs(nums[j]))
             {
                 ans[k] = nums[i] * nums[i];
                 i++;
             }
             else {
                 ans[k] = nums[j] * nums[j];
                 j--;
             }
             k--;
        }

        return ans;
    }

    int main()
{
    int n;
    cout<<"Enter array size: \n";
    cin>>n;
    cout<<"Enter array elements: \n";
    vector<int>arr1(n,0);

    for(int i=0;i<n;i++)
    cin>>arr1[i];
    
    vector<int> ans = sortedSquares(arr1);
    cout<<"Output is: \n";
    for(auto i:ans)
       cout<<i<<" ";

    
    return 0;
}