#define llint long long int
class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        
        llint l = index;
        llint r = n - index - 1;
        llint lchod = 1, rchod = 1;
        llint ans=1;
        while(lchod > 0 || rchod > 0){
            lchod = 0;
            rchod = 0;
            llint lr = (l*(l+1)/2);
            llint rr = (r*(r+1)/2);
            ans = (maxSum + lr + rr)/n;
            if(ans - l < 1) lchod += l - ans + 1;
            if(ans - r < 1) rchod += r - ans + 1;
            l -= lchod;
            r -= rchod;
            maxSum -= (lchod + rchod);
            n -= (lchod + rchod);
            lr = (l*(l+1)/2);
            rr = (r*(r+1)/2);
            ans = (maxSum + lr + rr)/n;
        }
        
        return (int)ans;
    }
};