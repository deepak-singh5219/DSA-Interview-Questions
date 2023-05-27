 vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(auto i:nums)
        mp[i]++;
        vector<int> ans;
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==2)
            {
                ans.push_back(i);
                break;
            }         
        }
         for(int i=1;i<=n;i++)
        {
            if(mp[i]==0)
            {
                ans.push_back(i);
                break;
            }         
        }

        return ans;
    
    }