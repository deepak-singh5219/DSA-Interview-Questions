#include<bits/stdc++.h>
using namespace std;

int arrayPairSum(vector<int> &nums) {
        Arrays.sort(nums);
        int total = 0;
        for (int i = 0; i < nums.length; i += 2) {
            total += nums[i];
        }
        return total;
    }
    int main()
{
    int n;
    cout<<"Enter array size: \n";
    cin>>n;
    cout<<"Enter array elements: \n";
    vector<int>arr(n,0);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    
    int ans = arrayPairSum(arr);
    cout<<"Output is: \n";
    cout<<ans<<endl;
    return 0;
}    