#include<bits/stdc++.h>
using namespace std;


int minimumDeleteSum(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        
        int sm1=0;
        int sm2=0;

        for(int i=0;i<n;i++)
        {
            sm1+=s1[i];
        }
        for(int i=0;i<m;i++)
        {
            sm2+=s2[i];
        }

        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(s1[i-1]==s2[j-1])
                   dp[i][j] = s1[i-1]+dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);   
            }
        }
        int sm = dp[n][m];
        return sm1+sm2-2*sm;
    }

int main(){

    string s1,s2;
    cout<<"Enter string 1\n";
    cin>>s1;
    cout<<"Enter string 2\n";
    cin>>s2;
    int ans = minimumDeleteSum(s1,s2);
    cout<<"Output:\n"<<ans;
    return 0;  
}