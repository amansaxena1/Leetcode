#define llint int
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        llint ans = 0;
        for(llint i=0;i<satisfaction.size();i++){
            int temp = 0;
            for(llint j=1;j<=satisfaction.size()-i;j++) temp += j*satisfaction[i+j-1];
            ans = max(ans, temp);
        }
        return ans;
    }
};