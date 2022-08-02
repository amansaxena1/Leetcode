class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>v(m),ans;
        for(int i=0;i<m;i++) v[i] = i+1;
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<m;j++){
                if(v[j] == queries[i]) { 
                    ans.push_back(j);
                    break;
                }
            }
            for(int j=ans[ans.size()-1];j>0;j--) v[j] = v[j-1];
            v[0] = queries[i];
        }
        return ans;
    }
};