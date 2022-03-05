class Solution {
public:
    
    void helper(int currSum, int open, int close, vector<string>&ans, string str){
        if(currSum < 0 || open < 0 || close < 0) return;
        if(currSum == 0 && open == 0 && close == 0){
            ans.push_back(str);
        }
        string op = str + '(';
        string clo = str + ')';
    
        helper(currSum + 1, open - 1, close, ans, op);
        helper(currSum - 1, open, close - 1, ans, clo);     
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        helper(0, n, n, ans, "");
        
        return ans;
    }
};
// ((()))