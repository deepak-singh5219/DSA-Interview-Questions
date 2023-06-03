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
    
    vector<vector<int>>  ans = findDifference(arr1,arr2,arr3);
    cout<<"Output is: \n";
    for(auto i:ans)
    {
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}