class Solution {
public:
    int helper(char i, char j, string &s){
        int ans = 0, temp = 0;
        bool c = false;
        for(auto k:s){
            if(k == i) temp++;
            else if(k == j){
                temp--;
                c = true;
                if(temp < 0) {
                    temp = 0;
                    c = false;
                }
            }
            if(c) ans = max(ans, temp);
        }
        return ans;
    }

    int largestVariance(string s) {
        int ans = 0;
        string t = s;
        reverse(t.begin(), t.end());
        set<char>st;
        for(auto i:s) st.insert(i);
        for(auto i:st){
            for(auto j:st){
                if(i!=j){
                    ans = max({ans, helper(i,j,s), helper(i,j,t)});
                }
            }
        }
        return ans;
    }
};

// a a  b a  b a a
// 1 1 -1 1 -1 1 1