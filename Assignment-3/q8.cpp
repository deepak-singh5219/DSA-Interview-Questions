#include<bits/stdc++.h>
using namespace std;
bool attend_meeting(vector<vector<int>>&intervals){
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<intervals.size()-1;i++)
    {
        if(intervals[i+1][0]<intervals[i][1])
        return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter intervals size: \n";
    cin>>n;
    cout<<"Enter intervals elements: \n";
    vector<vector<int>>arr(n,vector<int>(2,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        cin>>arr[i][j];
    }
    
    bool ans = attend_meeting(arr);
    cout<<"Output is: \n";
    if(ans)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}