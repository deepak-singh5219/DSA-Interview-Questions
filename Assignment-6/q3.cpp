// **Question 3**

// Given an array of integers arr, return *true if and only if it is a valid mountain array*.

// Recall that arr is a mountain array if and only if:

// - arr.length >= 3
// - There exists some i with 0 < i < arr.length - 1 such that:
//     - arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
//     - arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

#include<bits/stdc++.h>
using namespace std;
bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int point=-2,p=-1,j=arr.size()-1;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]<arr[i+1])
                point=i+1;
            else
                break;
        }
        for(int i=arr.size()-1;i>0;i--)
        {
            if(arr[i]<arr[i-1])
                p=i-1;
            else
                break;
        }
        if(point==p)
            return true;
        else
            return false;
    }
int main()
{
    vector<int> arr = {2,1};
    bool ans =validMountainArray(arr);
    cout<<ans<<endl;
    return 0;
}