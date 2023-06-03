#include<bits/stdc++.h>
using namespace std;
  
  vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n1=matrix.size();
        int n2=matrix[0].size();
        vector<vector<int>> ans(n2,vector<int>(n1,0));

        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                ans[j][i] = matrix[i][j];
            }
        }

        return ans;
  }


        int main()
{
    int n,m;
    cout<<"Enter row size: \n";
    cin>>n;
    cout<<"Enter col size: \n";
    cin>>m;
    cout<<"Enter array elements: \n";
    vector<vector<int>> matrix(n,vector<int> (m,0));
    
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cin>>matrix[i][j];
    }
   }
    
   vector<vector<int>> ans = transpose(matrix);
    cout<<"Output is: \n";
    for(auto i:ans)
    {
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}          