#include<bits/stdc++.h>
using namespace std;

 int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0) return m*n;
        int mn1 = INT_MAX;
        int mn2 = INT_MAX;
        for(int i=0;i<ops.size();i++)
        {
                mn1 = min(mn1,ops[i][0]);
                mn2 = min(mn2,ops[i][1]); 
        }

        return mn1*mn2;
    }


        int main()
{
    int n,m;
    cout<<"Enter row size: \n";
    cin>>m;
    cout<<"Enter col size: \n";
    cin>>n;
    cout<<"Enter array elements: \n";
    vector<vector<int>> ops(m,vector<int> (n,0));
    
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cin>>ops[i][j];
    }
   }
    
   int ans = transpose(matrix);
    cout<<"Output is: \n";
   cout<<ans<<" ";
    return 0;
}              