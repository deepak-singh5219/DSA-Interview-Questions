vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int front = j+1;
                int back = n-1;
                long tmp = (long)target - ((long)nums[i]+(long)nums[j]);

                while(front<back)
                {
                    int sum = nums[front] + nums[back];
                    if(sum<tmp) front++;
                    else if(sum>tmp) back--;
                    else {
                        ans.push_back({nums[i],nums[j],nums[front],nums[back]});

                        while(front<n && nums[front]==ans.back()[2]) front++;
                        while(back>=0 && nums[back]==ans.back()[3]) back--;
                    }
                }

                while(j+1<n && nums[j+1]==nums[j]) j++;
            }

            while(i+1<n && nums[i+1]==nums[i]) i++;
        }
        return ans;
    }