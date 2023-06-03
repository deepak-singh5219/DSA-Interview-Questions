#include<bits/stdc++.h>
using namespace std;

vector<int> findCommon(vector<int> ar1, vector<int> ar2, vector<int> ar3)
{
    
    int i = 0, j = 0, k = 0;
    int n1 = ar1.size();
    int n2 = ar2.size();
    int n3 = ar3.size();
    vector<int> ans;
 
    while (i < n1 && j < n2 && k < n3) {
    
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
            ans.push_back(ar1[i]);
            i++;
            j++;
            k++;
        }
 
        
        else if (ar1[i] < ar2[j])
            i++;
 
        
        else if (ar2[j] < ar3[k])
            j++;
 
        
        else
            k++;
    }

    return ans;
}

    int main()
{
    int n1,n2,n3;
    cout<<"Enter array1 size: \n";
    cin>>n1;
    cout<<"Enter array1 elements: \n";
    vector<int>arr1(n1,0);
    for(int i=0;i<n1;i++)
    cin>>arr1[i];

    cout<<"Enter array2 size: \n";
    cin>>n2;
    cout<<"Enter array2 elements: \n";
    vector<int>arr2(n2,0);
    for(int i=0;i<n2;i++)
    cin>>arr2[i];

    cout<<"Enter array3 size: \n";
    cin>>n3;
    cout<<"Enter array3 elements: \n";
    vector<int>arr3(n3,0);
    for(int i=0;i<n3;i++)
    cin>>arr3[i];

   
    
    vector<int> ans = findCommon(arr1,arr2,arr3);
    cout<<"Output is: \n";
    for(auto i:ans)
       cout<<i<<" ";

    
    return 0;
}