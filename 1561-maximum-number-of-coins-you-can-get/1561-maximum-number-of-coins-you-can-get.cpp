class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int ind = n-2, ans = 0;
        for(int i=0;i<n/3;i++){
            ans += piles[ind];
            ind-=2;
        }
        return ans;
    }
};