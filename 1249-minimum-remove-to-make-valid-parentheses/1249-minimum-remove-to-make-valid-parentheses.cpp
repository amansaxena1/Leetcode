class Solution {
public:
    string minRemoveToMakeValid(string &s) {
        string t=s,ans="";
        int cnt=0;
        for(int i=0;i<t.length();i++){
            if(t[i] == '(') cnt++;
            else if(t[i] == ')') cnt--;
            if(cnt < 0) cnt = 0;
            else ans+=t[i];
        }
        if(!cnt) return ans;
        t = ans;
        ans="";
        for(int i=t.length()-1;i>=0;i--){
            if(cnt>0 && t[i] == '(') cnt--;
            // else auto pos = ans.insert(ans.begin(), t[i]);
            else ans+=t[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};