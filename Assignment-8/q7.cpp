#include<bits/stdc++.h>
using namespace std;
string decodeString(string s) {
        stack<char>st;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=']')
            st.push(s[i]);
            else
            {
                string t="",num="";
                while(st.top()!='[')
                {
                    t+=st.top();
                    st.pop();
                }
                st.pop();
              while(!st.empty() && isdigit(st.top()))
              {
                 num+=st.top();
                  st.pop();
              }
                 reverse(num.begin(),num.end());
                int n=stoi(num);
                reverse(t.begin(),t.end());
                // cout<<t<<" ";
                    while(n--)
                    {
                       for(int j=0;j<t.size();j++)
                       st.push(t[j]);
                    } 
              }
         }
        string k="";
        while(!st.empty())
        {
            k+=st.top();
            st.pop();
        }
        reverse(k.begin(),k.end());
        return k;
    }
int main()
{
  string ans = decodeString("3[a]2[bc]");
  cout<<ans;
}