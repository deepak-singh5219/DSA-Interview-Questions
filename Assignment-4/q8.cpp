vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        int i=0;
        int j=0;
        int k=n;
        while(i<nums.size())
        {
            if(i%2==0)
            {
                ans[i]=nums[j];
                j++;
                i++;
            }
            else
            {
                
                ans[i]=nums[k];
                k++;
                i++;
            }
        }
        
        return ans;
        
    }