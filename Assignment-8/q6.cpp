#include<bits/stdc++.h>
using namespace std;
vector<int> findAnagrams(string s, string p) {
        int k=p.size();
        vector<int>v(26,0);
        vector<int>c(26,0);
        vector<int>ans;
        int i=0,j=0;
        for(auto i:p)
            v[i-'a']++;
        while(j<s.size())
        {
            c[s[j]-'a']++;
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                if(v==c)
                    ans.push_back(i);
                c[s[i]-'a']--;
                i++;
                j++;
            }
        }
        return ans;
        
    }
int main()
{
  vector<int> ans = findAnagrams("cbaebabacd","abc");
  for(auto i:ans)
  cout<<i<<" ";
}