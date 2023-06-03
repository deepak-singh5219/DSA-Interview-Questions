
#include<bits/stdc++.h>
using namespace std;

  vector<int> plusOne(vector<int>& digits) {
        vector<int> val(1,1);
        
        int n1=digits.size();
        int n2=val.size();
        int i=n1-1;
        int j=n2-1;
        vector<int> ans;
        int sum=0;
        int carry=0;
        while(i>=0 || j>=0)
        {
            if(i>=0)
                sum+=digits[i--];
            if(j>=0)
                sum+=val[j--];
            
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            sum=0;
        
        }
        if(carry!=0)
            ans.push_back(carry);
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }

int main()
{
    int n;
    cout<<"Enter the digit size\n";
    cin>>n;
    cout<<"Enter digit elements :\n";
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int val;
    
    vector<int>ans = plusOne(arr);
    cout<<"Output is : \n";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}    