#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        int i=0;
        int j=0;
        int k=n;
        while(i<nums.size())
        {
            if(i%2==0)
            {
                ans[i]=nums[j];
                j++;
                i++;
            }
            else
            {
                
                ans[i]=nums[k];
                k++;
                i++;
            }
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
    
    vector<int> ans = sortedSquares(arr1,n/2);
    cout<<"Output is: \n";
    for(auto i:ans)
       cout<<i<<" ";

    
    return 0;
}