    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int k = 0;
        vector<int> nums(nums1.size(),0);
        
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                nums[k]=nums1[i];
                i++;
                k++;
            }
            else if(nums1[i]>nums2[j])
            {
                nums[k]=nums2[j];
                j++;
                k++;
            }
            else{
                nums[k++] = nums1[i];
                nums[k++] = nums2[j];
                i++;
                j++;
            }
        }

        while(i<m)
        {
            nums[k] = nums1[i];
            i++;
            k++;
        }

        while(j<n)
        {
            nums[k] = nums2[j];
            j++;
            k++;
        }

        nums1 = nums;

    }