 bool isMonotonic(vector<int>& nums) {
        int index=-1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
             {
                index=i;
                break;
            }
                
        }
        
        if(index==-1)
            return true;
        
        for(int i=index+1;i<nums.size();i++)
        {
            if(nums[index]>nums[index-1] && nums[i]<nums[i-1])
                return false;
            
            if(nums[index]<nums[index-1] && nums[i]>nums[i-1])
                return false;
        }
        
        return true;
      
        
    }