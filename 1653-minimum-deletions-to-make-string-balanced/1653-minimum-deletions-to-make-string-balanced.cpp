class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        vector<int>acnt(n,0), bcnt(n,0);
        // if(s[0] == 'b') bcnt[0]++;
        // if(s[n-1] == 'a') acnt[n-1]++;
        for(int i=1;i<n;i++) bcnt[i] = s[i-1] == 'b' ? 1 + bcnt[i-1] : bcnt[i-1];
        for(int i=n-2;i>=0;i--) acnt[i] = s[i+1] == 'a' ? 1 + acnt[i+1] : acnt[i+1];
        
        int ans = INT_MAX;
        for(int i=0;i<n;i++) ans = min(ans,acnt[i] + bcnt[i]);
        return ans;

    }
};