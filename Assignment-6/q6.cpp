// <aside>
// 💡 **Question 6**

// An integer array original is transformed into a **doubled** array changed by appending **twice the value** of every element in original, and then randomly **shuffling** the resulting array.

// Given an array changed, return original *if* changed *is a **doubled** array. If* changed *is not a **doubled** array, return an empty array. The elements in* original *may be returned in **any** order*.

// **Example 1:**

// **Input:** changed = [1,3,4,2,6,8]

// **Output:** [1,3,4]

// **Explanation:** One possible original array could be [1,3,4]:

// - Twice the value of 1 is 1 * 2 = 2.
// - Twice the value of 3 is 3 * 2 = 6.
// - Twice the value of 4 is 4 * 2 = 8.

// Other original arrays could be [4,3,1] or [3,1,4].

// </aside>

#include<bits/stdc++.h>
using namespace std;
vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()==1)
            return {};
        vector<int>ans;
        int n=changed.size()/2;
        vector<int>hash(100001,0);
        for(int i=0;i<changed.size();i++)
            hash[changed[i]]++;
        // for(auto i:hash)
        //     cout<<i<<" ";
         for(int i=0;i<hash.size();i++)
         {
            while(hash[i]>0)
            {
                if(hash[i*2]<=0)
                    return {};
                else
                {
                    ans.push_back(i);
                    hash[i]--;
                    hash[i*2]--;
                    if(hash[i*2]<0)
                        return {};
                }
            }
         }
        if(ans.size()==n && ans.size()*2==changed.size())
            return ans;
        return {};
    }
int main()
{
   vector<int>changed = {1,3,4,2,6,8};
   vector<int> ans = findOriginalArray(changed);
   for(auto i:ans)
   cout<<i<<" ";
   return 0;

}