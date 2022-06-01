#define llint long long int
class Solution {
public:
    int minimumLines(vector<vector<int>>& v) {
        sort(v.begin(), v.end());
        long double ls = INT_MIN;
        llint cnt=0;
        for(llint i=1;i<v.size();i++){
            long double cs = (v[i][1] - v[i-1][1])/(long double)(v[i][0] - v[i-1][0]);
            if(cs != ls) {
                cnt++;
                ls = cs;
            }
        }
        return cnt;
    }
};