#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
        int n = nums.size();

        int st = 0;
        int end = n-1;
        if(nums[0]<nums[n-1]) return nums[0];
        while(st<end)
        {
            int mid = st + (end-st)/2;
            if(nums[0]<=nums[mid]){
                st=mid+1;
            }
            else end=mid;
        }

        return nums[st];
}

int main(){

    int n;
    cout<<"Enter array size: \n";
    cin>>n;
    cout<<"Enter array elements: \n";
    vector<int>arr1(n,0);
    
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    
    int ans = findMin(arr1);
    cout<<"Output is: \n";
    cout<<ans<<endl;
    return 0;
}