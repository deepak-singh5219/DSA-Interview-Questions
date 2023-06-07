class Solution {
public:
    string reverseWords(string s) {
        
        int i,j=0;
        int n =s.size();
        while(i<n)
        {
            while(j<n && s[j]!=' ')
                j++;
            
            reverse(s.begin()+i,s.begin()+j);
            
            i=j+1;
            j=i;
            
        }
        
        return s;
        
    }
};