
// 💡 **Question 4**

// Given a binary array nums, return *the maximum length of a contiguous subarray with an equal number of* 0 *and* 1.

// **Example 1:**

// **Input:** nums = [0,1]

// **Output:** 2

// **Explanation:**

// [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.

#include<bits/stdc++.h>
using namespace std;
int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[0]=-1;
        int sum=0,mx=0;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]==1)
               sum+=1;
            else
                sum+=-1;
            if(mp.count(sum))
                mx=max(mx,i-mp[sum]);
            else
                mp[sum]=i;
        }
        return mx;
    }
int main()
{
  vector<int>arr = {0,1};
  int ans = findMaxLength(arr);
  cout<<ans<<endl;
  return 0;
}