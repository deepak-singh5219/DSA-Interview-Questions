#include<bits/stdc++.h>
using namespace std;

string genString(TreeNode *root,string str)
    {
        if(root==NULL)
            return "";
       
       str+=to_string(root->val);
       if(root->left!=NULL || root->right!=NULL)
       {
       str+='(';
       str+=genString(root->left,"");
       str+=')';
       if(root->right!=NULL)
       {
       str+='(';
       str+=genString(root->right,"");
       str+=')';    
       }    
       }
       return str;
    }
    
    
    string tree2str(TreeNode* root) {
    string str;
         str=genString(root,str);
        int i=0;
        string ans;
       
    return str;
        
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

