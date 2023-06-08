#include<bits/stdc++.h>
using namespace std;

bool checkValidString(string s) {
       int lo = 0, hi = 0;
       for (char c: s) {
           lo += c == '(' ? 1 : -1;
           hi += c != ')' ? 1 : -1;
           if (hi < 0) break;
           lo = max(lo, 0);
       }
       return lo == 0;
    }

int main(){

    string s1,s2;
    cout<<"Enter string 1\n";
    cin>>s1;
    bool ans = checkValidString(s1);
    cout<<"Output:\n"<<ans;
    return 0;  
}
