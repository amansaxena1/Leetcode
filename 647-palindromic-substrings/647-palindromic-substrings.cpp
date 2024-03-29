class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        vector<vector<bool>>dp(n, vector<bool>(n, false));
        for(int i=0;i<n;i++) dp[i][i] = true;
        for(int i=0;i<n-1;i++) if(s[i] == s[i+1]) dp[i][i+1] = true;
        
        for(int i=2;i<n;i++){
            for(int j=0;j+i<n;j++){
                if(s[j] == s[j+i] && dp[j+1][j+i-1]) dp[j][j+i] = true;
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(dp[i][j]) ans++;
        return ans;
    }
};