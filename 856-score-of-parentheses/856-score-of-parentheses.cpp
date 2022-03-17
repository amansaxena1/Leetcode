class Solution {
public:
    int scoreOfParentheses(string s) {
        int depth = 0, ans = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(') depth++;
            else{
                depth--;
                if(s[i-1] == '('){
                    ans += pow(2, depth);
                }
            }
        }
        return ans;
    }
};