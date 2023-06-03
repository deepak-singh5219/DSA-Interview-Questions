#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> shortest_missing_range(vector<int>&arr, int lower, int upper)
{
   int n=arr.size();
   unordered_set<int>s;
   for(auto i:arr)
   s.insert(i);
   vector<vector<int>>ans;
   int rs = 0 , re = 0;
   for(int i=lower;i<=upper;i++)
   {
      if(s.find(i)!=s.end())continue;
      else{
        rs = i;
          while(i<=upper)
          {
             if(s.find(i)!=s.end())
             {
                re=i-1;
                break;
             }
             i++;
          }
          if(i>=upper)
          re=upper;
        ans.push_back({rs,re});  
      }
      i--;
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
    
    int lower = 0, upper = 0;
    cout<<"Enter the lower and upper range: \n";
    cin>>lower>>upper;
    vector<vector<int>> ans = shortest_missing_range(arr,lower,upper);
    cout<<"Output is: \n";
    for(auto a:ans)
    {
        for(auto i:a)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}