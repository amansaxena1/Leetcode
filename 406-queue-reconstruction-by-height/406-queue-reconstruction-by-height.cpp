class Solution {
public:
    
    static bool sorti(const vector<int>& v1, const vector<int>& v2){
        if(v1[0]==v2[0]) return v2[1]<v1[1];
        else return v1[0]<v2[0];
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n = people.size();
        vector<vector<int>> ans(n);
        set<int>st;
        sort(people.begin(),people.end(), sorti);
        for(int i=0;i<n;i++) st.insert(i);
        
        for(int i=0;i<n;i++){
            auto it = st.begin();
            it = next(it, people[i][1]);
            ans[*it] = people[i];
            st.erase(it);
        }
        
        return ans;   
    }
};