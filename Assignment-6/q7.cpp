// <aside>
// 💡 **Question 7**

// Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
// **Input:** n = 3

// **Output:** [[1,2,3],[8,9,4],[7,6,5]]

// </aside>

#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
       int l=0,r=n-1;
       int t=0,d=n-1;
        int cnt=0,g=1;
         while(l<=r && t<=d)
        {
            if(cnt==0)
            {
                for(int i=l;i<=r;i++){
                  v[l][i]=g++;
                }
                cnt=1;
                t++;
            }
            else if(cnt==1)
            {
                for(int i=t;i<=d;i++){
                    v[i][r]=g++;
            }
                cnt=2;
                r--;
            }
            else if(cnt==2)
            {
                for(int i=r;i>=l;i--){
                    v[d][i]=g++;
                }
                cnt=3;
                d--;
            }
            else if(cnt==3)
            {
                for(int i=d;i>=t;i--){
                    v[i][l]=g++;
            }
                    cnt=0;
                    l++;
            }
        }
                 return v;
    }
int main()
{
   vector<vector<int>>ans  = generateMatrix(3);
   for(auto it:ans)
   {
    for(auto i:it)
    cout<<i<<" ";
    cout<<endl;
   }
   return 0;
}