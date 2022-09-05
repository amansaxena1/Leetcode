class Solution {
public:
    
    void helper(string curr, string &str, vector<string>&v, vector<int>&vis, string &pattern){
        if(curr.size() == str.size()) {
            for(int j = 1; j < curr.size(); j++){
                if((curr[j] > curr[j-1] && pattern[j-1] != 'I') || (curr[j] < curr[j-1] && pattern[j-1] != 'D')) return;
            }
            v.push_back(curr);
            return;
        }
        for(int i=0;i<str.size();i++){
            if(!vis[i]){
                vis[i] = 1;
                int j = curr.size()-1;
                if(j < 0) helper(curr + str[i], str, v, vis, pattern);
                else if((str[i] > curr[j] && pattern[j] == 'I') || (str[i] < curr[j] && pattern[j] == 'D')) helper(curr + str[i], str, v, vis, pattern);
                vis[i] = 0;
            }
        }
        return;
    }
    
    string smallestNumber(string pattern) {
        int n = pattern.length();
        vector<string>v;
        string str = "123456789";
        str = str.substr(0, n+1);
        vector<int>vis(n+1,0);
        helper("", str, v, vis, pattern);
        return v[0];
    }
};