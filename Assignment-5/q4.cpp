// Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*

// - answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
// - answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

// **Note** that the integers in the lists may be returned in **any** order.

// **Example 1:**

// **Input:** nums1 = [1,2,3], nums2 = [2,4,6]

// **Output:** [[1,3],[4,6]]

// **Explanation:**

// For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].

// For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
      unordered_map<int,int> mp;
        vector<vector<int>> ans;
        
        for(auto i:nums2)
            mp[i]++;
        unordered_set<int> st;
        
        for(auto i:nums1)
        {
            if(mp[i]==0)
                st.insert(i);
        }
        vector<int> vec(st.begin(),st.end());
        ans.push_back(vec);
        mp.clear();
        st.clear();
        vec.clear();
        for(auto i:nums1)
            mp[i]++;
        
        for(auto i:nums2)
        {
            if(mp[i]==0)
                st.insert(i);    
        }
        
         vector<int> vec1(st.begin(),st.end());
        ans.push_back(vec1);
          
        return ans;
        
    }

int main()
{
    int n;
    cout<<"Enter array size: \n";
    cin>>n;
    cout<<"Enter array elements: \n";
    vector<int>arr1(n,0);
    vector<int>arr2(n,0);
    
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    for(int i=0;i<n;i++)
    cin>>arr2[i];
    
    vector<vector<int>>  ans = findDifference(arr1,arr2);
    cout<<"Output is: \n";
    for(auto i:ans)
    {
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}