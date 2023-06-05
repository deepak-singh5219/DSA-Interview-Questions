// **Question 2**

// You are given an m x n integer matrix matrix with the following two properties:

// - Each row is sorted in non-decreasing order.
// - The first integer of each row is greater than the last integer of the previous row.

// Given an integer target, return true *if* target *is in* matrix *or* false *otherwise*.

// You must write a solution in O(log(m * n)) time complexity.
#include<bits/stdc++.h>
using namespace std;
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0,j=n*m-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(matrix[mid/m][mid%m]==target)
                return true;
            else if(matrix[mid/m][mid%m]>target)
                j=mid-1;
            else
                i=mid+1;
        }
        return false;
    }
int main()
{
   vector<vector<int>>vect(3,vector<int>(4,0));
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<4;j++)
    cin>>vect[i][j];
   }
   bool ans = searchMatrix(vect,3);
   if(ans)
   cout<<"True";
   else
   cout<<"False";
   return 0;
}