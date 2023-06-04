// You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase **may be** incomplete.

// Given the integer n, return *the number of **complete rows** of the staircase you will build.

#include<bits/stdc++.h>
using namespace std;
 
 int arrangeCoins(int n) {
        int rows = 0;
        int i = 1;
        while(n>0){
        if(n-i<0) break;
        n-=i;
        rows+=1;
        i+=1;
        }
        return rows;
    }

    int main()
{
    int n;
    cout<<"Enter coins \n";
    cin>>n;
    
    
    int ans = arrayPairSum(n);
    cout<<"Output is: \n";
    cout<<ans<<endl;
    return 0;
}    
