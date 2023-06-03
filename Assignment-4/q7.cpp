 int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0) return m*n;
        int mn1 = INT_MAX;
        int mn2 = INT_MAX;
        for(int i=0;i<ops.size();i++)
        {
                mn1 = min(mn1,ops[i][0]);
                mn2 = min(mn2,ops[i][1]); 
        }

        return mn1*mn2;
    }