class Solution {
public:
    bool check(int ind, string s, int absent, int late, bool status){
        if(!status || absent>1 || late == 3) return false;
        if(ind == s.length()) return true; 
        if(s[ind] == 'A') return check(ind+1, s, absent+1, 0, true);
        else if(s[ind] == 'L') return check(ind+1, s, absent, late+1, true);
        return check(ind+1, s, absent, 0, true);
    }    
    bool checkRecord(string s) {
        return check(0, s, 0, 0, true);
    }
};