vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return {};
        stack<int> st;
        vector<int> val;
        vector<string> ans;
        val.push_back(nums[0]);
        // val -> 0
        // st -> 0
        for(int i=0;i<n;i++)
        {
            if(!st.empty())
            {
                if(st.top()+1==nums[i])
                {
                    st.top()+=1;
                }
                else{
                    if(val.back()==st.top())
                     ans.push_back(to_string(st.top()));
                   else {
                       string temp;
                       temp+=to_string(val.back());
                       temp+="->";
                       temp+=to_string(st.top());
                       ans.push_back(temp);
                   }
                    while(!st.empty()) st.pop();
                       st.push(nums[i]);
                       val.pop_back();
                       val.push_back(nums[i]);
                }
            }
            else st.push(nums[i]);   
        }
        if(!st.empty()){
            if(val.back()==st.top())
            {
                ans.push_back(to_string(st.top()));
            }
            else{
                string temp;
                       temp+=to_string(val.back());
                       temp+="->";
                       temp+=to_string(st.top());
                       ans.push_back(temp);
            }
        }    

     return ans;

    }