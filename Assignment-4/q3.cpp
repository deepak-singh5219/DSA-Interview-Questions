  vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n1=matrix.size();
        int n2=matrix[0].size();
        vector<vector<int>> ans(n2,vector<int>(n1,0));

        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                ans[j][i] = matrix[i][j];
            }
        }

        return ans;