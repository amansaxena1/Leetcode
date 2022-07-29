class Solution {
public:
    int numSteps(string s) {
        int n = s.length(), c = 0;
        int ans = 0;
        for(int i = n-1; i>=1; i--){
            if((s[i]-'0' == 1 && c == 0) || (s[i]-'0' == 0 && c == 1)){
                c = 1;
                ans+=2;
            }
            else if((s[i]-'0' == 1 && c == 1) || (s[i]-'0' == 0 && c == 0)) ans++;
            
        }
        if(c) ans++;
        return ans;
    }
};