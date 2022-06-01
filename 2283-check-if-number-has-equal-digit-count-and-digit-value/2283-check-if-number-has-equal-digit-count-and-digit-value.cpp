#define llint long long int
class Solution {
public:
    bool digitCount(string s) {
        map<llint,llint>mp;
        for(llint i=0;i<s.length();i++) mp[s[i]-'0']++;
        for(llint i=0;i<s.length();i++) if(mp[i] != (s[i]-'0')) return false;
        return true;
    }
};