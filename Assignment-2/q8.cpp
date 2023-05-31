 int smallestRangeI(vector<int>& nums, int k) {
        int mn = *min_element(nums.begin(),nums.end());
        int mx = *max_element(nums.begin(),nums.end());

        if(mn+k>=mx-k) return 0;
        return (mx-k)-(mn+k);
    }