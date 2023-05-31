   int findLHS(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums) mp[i]++;
        

        int mx = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]+1)!=mp.end())
            {
                mx=max(mx,mp[nums[i]]+mp[nums[i]+1]);
            }
        }
        return mx;
    }