#include<bits/stdc++.h>
using namespace std;

   int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n-1;

        while(st<=end)
        {
            int mid = st + (end - st)/2;
            if(nums[mid]==target)
            return mid;
            else if(target>nums[mid])
            {
                st = mid + 1;
            }
            else end = mid - 1;
        }

        return -1;
    }

    int main(){
         int n;
    cout<<"Enter array size: \n";
    cin>>n;
    cout<<"Enter array elements: \n";
    vector<int>arr(n,0);
    for(int i=0;i<n;i++)
    cin>>arr[i];
     int target = 0;
    cout<<"Enter the target: \n";
    cin>>target;
    return search(arr,target);
    }