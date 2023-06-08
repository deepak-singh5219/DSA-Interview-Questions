#include<bits/stdc++.h>
using namespace std;

int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();

      vector<vector<int>> dp(m+1,vector<int> (n+1,0));
	    
	    for(int i=1;i<m+1;i++)
	    {
	        for(int j=1;j<n+1;j++)
	        {
	            if(word1[i-1]==word2[j-1])
	            {
	                dp[i][j] = 1 + dp[i-1][j-1];
	            }
	            else dp[i][j] = 0 + max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    
	      int len = dp[m][n];
        return (m-len) + (n-len);
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