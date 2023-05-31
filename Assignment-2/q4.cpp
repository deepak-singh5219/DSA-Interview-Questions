    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        vector<int> nums(size+2,0);
        for(int i=1;i<size+1;i++){
            nums[i]=flowerbed[i-1];
        }
        //  int n = nums.size();
        
         for(int i=1;i<nums.size()-1;i++)
         {
            if(n==0) return true;
            if(nums[i]==0 && nums[i-1]==0 && nums[i+1]==0)
             {
                 nums[i] = 1;
                 n--;
             }
         }

         return n==0;
        
    }