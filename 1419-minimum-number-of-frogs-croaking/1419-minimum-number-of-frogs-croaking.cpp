class Solution {
public:
    
    bool check(map<char,int>mp){
        bool ans = true;
        for(auto i:mp) if(!(i.first =='c' || i.first =='r' || i.first =='o' || i.first =='a' || i.first =='k')) return false;
        if(mp['c']<mp['r'] || mp['r']<mp['o'] || mp['o']<mp['a'] || mp['a']<mp['k']) return false;
        return true;
    }
    
    int minNumberOfFrogs(string croakOfFrogs) {
        map<char,int>mp;
        int ans = INT_MAX;
        for(auto i:croakOfFrogs) {
            mp[i]++;
            if(!check(mp)) return -1;
        }
        if(mp['c'] != mp['r'] || mp['r'] != mp['o'] || mp['o'] != mp['a'] || mp['a'] != mp['k']) return -1;
        int a = 0;
        for(int i=0;i<croakOfFrogs.length();i++){
            if(croakOfFrogs[i] == 'k') a++;
            if(croakOfFrogs[i] == 'c' && a > 0) {
                mp['c']--;
                a--;
            }
        }
        return mp['c'];
    }
};