class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans = 0;
        for(int i=0;i<k;i++) ans += cardPoints[i];
        
        int temp = ans;
        for(int i=0;i<k;i++){
            temp += cardPoints[cardPoints.size()-1-i];
            temp -= cardPoints[k-i-1];
            ans = max(ans, temp);
        }
        return ans;
    }
};