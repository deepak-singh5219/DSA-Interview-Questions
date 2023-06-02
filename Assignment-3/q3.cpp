void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-2;
        for(;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
               break;
        }
        
        int j=n-1;
        for(;j>=0 && i>=0;j--)
        {
            if(nums[j]>nums[i])
               break;
        }
        if(i>=0)
        swap(nums[i],nums[j]);

        sort(nums.begin()+i+1,nums.begin()+n);
    }