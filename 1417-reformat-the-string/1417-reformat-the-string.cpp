class Solution {
public:
    string reformat(string s) {
        string d="",l="";
        for(auto i:s){
            if(isdigit(i)) d+=i;
            else l+=i;
        }
        if(abs((int)(l.length() - d.length())) > 1) return "";
        string ans = "";
        int ind = 0;
        for(int i=0;i<min(d.length(),l.length());i++){
            ans+=d[ind];
            ans+=l[ind];
            ind++;
        }
        if(ind != l.length()) ans = l[ind] + ans;
        else if(ind != d.length()) ans += d[ind];
        
        return ans;
    }
};