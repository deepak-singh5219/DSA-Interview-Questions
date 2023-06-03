 #include<bits/stdc++.h>
using namespace std;


 int singleNumber(vector<int>& nums) {
        
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;  
        }
        int ans;
        for(auto it:mp)
        {
            if(it.second==1)
                ans=it.first;
        }
        return ans;
        
        
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
    
    int ans = singleNumber(arr);
    cout<<"Output is: \n";
    cout<<ans<<endl;
    return 0;
}