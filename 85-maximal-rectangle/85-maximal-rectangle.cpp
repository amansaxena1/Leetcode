class Solution {
public:
    int largestRectangle(vector<int>&h) {   
        stack<int>st;
        int n = h.size();
        vector<int>rse(n, n), lse(n, 0);
        for(int i = 0; i < n; i++){
            while(st.size() && h[st.top()] >= h[i]) st.pop();
            if(st.size()) lse[i] = st.top() + 1;
            st.push(i);
        }
        while(st.size()) st.pop();
        for(int i = n-1; i>=0; i--){
            while(st.size() && h[st.top()] >= h[i]) st.pop();
            if(st.size()) rse[i] = st.top();
            st.push(i);
        }
        int ans = 0;
        for(int i = 0; i < n; i++) ans = max(ans, h[i]*(rse[i] - lse[i]));
        return ans;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<vector<int>> v;
        int n = matrix.size(), m = matrix[0].size(), ans = 0;
        for(int i = 0; i < n; i++){
            vector<int>v(m,0);
            for(int j = 0; j < m; j++){
                int ind = i;
                while(ind >= 0 && matrix[ind][j] == '1') {
                    v[j]++;
                    ind--;
                }
            }
            ans = max(ans, largestRectangle(v));
        }
        return ans;
    }
};