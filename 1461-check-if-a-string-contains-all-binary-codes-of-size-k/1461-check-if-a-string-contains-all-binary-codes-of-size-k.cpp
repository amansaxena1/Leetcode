#define llint long long int
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>st;
        string str="";
        llint l=0;
        for(llint i=0;i<s.length();i++){
            str+=s[i];
            if(str.length()==k) st.insert(str);
            if(str.length()>k){
                str = str.erase(0,1);
                st.insert(str);
            }
        }
        // for(auto i:st) cout<<i<<"\n";
        if(st.size()<pow(2,k)) return false;
        return true;
    }
};