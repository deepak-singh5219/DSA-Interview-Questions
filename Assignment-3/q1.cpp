#include<bits/stdc++.h>
using namespace std;

 int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> tempSum;
        
        int closest = nums[0]+nums[1]+nums[2];
        
        for(int i=0;i<n;i++)
        {
            int front = i+1;
            int back = n-1;
            
            
            while(front<back)
            {
               int curSum = nums[front]+nums[back]+nums[i];
              
                if(abs(target-curSum)<abs(target-closest)) {
                closest = curSum;
            }
                
                if(curSum<target) front++;
                else if(curSum>target) back--;
                
                else return target;
  
            }
            while(i+1<n && nums[i+1]==nums[i]) i++;
        }
        
       
        return closest;
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
    
    int target = 0;
    cout<<"Enter the target: \n";
    cin>>target;
    int ans = threeSumClosest(arr,target);
    cout<<"Output is: \n";
    cout<<ans<<endl;
    return 0;
}