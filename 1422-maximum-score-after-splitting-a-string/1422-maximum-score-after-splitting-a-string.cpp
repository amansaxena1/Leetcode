class Solution {
public:
    int maxScore(string s) {
        int o = count(s.begin(), s.end(),'1');
        int ans = INT_MIN, z = 0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i] == '0') z++;
            else o--;
            ans = max(ans,z+o);
        }
        return ans;
    }
};