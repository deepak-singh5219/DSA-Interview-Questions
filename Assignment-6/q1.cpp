// **Question 1**

// A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:

// - s[i] == 'I' if perm[i] < perm[i + 1], and
// - s[i] == 'D' if perm[i] > perm[i + 1].

// Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return **any of them**.

// **Example 1:**

// **Input:** s = "IDID"

// **Output:**

// [0,4,1,3,2]

#include<bits/stdc++.h>
using namespace std;
vector<int> diStringMatch(string s) {
        vector<int>v;
        int n=s.size();
        int count=0,t=n;
        for(int i=0;i<n+1;i++)
        {
            if(s[i]=='I'){
               v.push_back(count);
                count++;
            }
            else if(s[i]=='D'){
                v.push_back(t);
                t--;
            }
            else
                v.push_back(count);    
        }
        return v;
    }
int main()
{

  vector<int> ans = diStringMatch("IDID");
  cout<<"Output is: \n";
  for(auto i:ans)
  cout<<i<<" ";
  return 0;
}