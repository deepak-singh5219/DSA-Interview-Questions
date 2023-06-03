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