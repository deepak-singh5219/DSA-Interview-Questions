#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int idx = abs(nums[i])-1;
            if(nums[idx]<0) ans.push_back(abs(nums[i]));
            else nums[idx] = -1*nums[idx];
        }

        return ans;

}

int main()
{
    int n;
    cout<<"Enter array size: \n";
    cin>>n;
    cout<<"Enter array elements: \n";
    vector<int>arr1(n,0);
    
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    
    vector<int> ans = findDuplicates(arr1);
    cout<<"Output is: \n";
    for(auto i:ans)
    {
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}