    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        int mid;
        if(target<nums[0])
            return 0;
        if(target>nums[nums.size()-1])
            return nums.size();
        
        while(i<=j)
        {
              mid=(i+j)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                j=mid-1;
            else i=mid+1;
     
        }
        
        cout<<mid;
        
        return i;   
    }