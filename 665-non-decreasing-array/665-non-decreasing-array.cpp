#define llint long long int
class Solution {
public:
    bool checkPossibility(vector<int>& v) {
        llint cnt=0;
        for(llint i=1;i<v.size();i++){
            if(v[i] < v[i-1]) {
                cnt++;
                if(i>=2){
                    if(v[i] < v[i-2]) v[i] = v[i-1];
                    else v[i-1] = v[i-2];
                }
                else if(i<v.size()-1){
                    if(v[i] < v[i+1]) v[i-1] = v[i];
                }
            }
        }
        if(cnt > 1) return false;
        return true;
    }
};