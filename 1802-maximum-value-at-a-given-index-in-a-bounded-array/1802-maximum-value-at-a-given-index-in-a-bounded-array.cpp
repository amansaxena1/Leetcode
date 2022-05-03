#define llint long long int
class Solution {
public:
    
//     llint helper(){
//         if(ans - l < 1){
            
//         }
//         if(ans - r < 1){
            
//         }
//         return 0;
//     }
    
    // -3 -2 -1 0 1 0 -1 -2 -3 -4 -5
    
    int maxValue(int n, int index, int maxSum) {
        
        llint l = index;
        llint r = n - index - 1;
        llint lchod = 1, rchod = 1;
        llint ans=1;
        while(lchod > 0 || rchod > 0){
            
            lchod = 0;
            rchod = 0;
            // cout<<l<< " " <<r<<" ";
            // cout<<l*(l+1)/2<<" "<<r*(r+1)/2<<"\n";
            
            
            // x-7 x-6 x-5 x-4 x-3 x-2 x-1 x x-1 x-2            = 10
            
            
            // 2              // x-4 x-4 x-4
            // 10x - 31 = 10
            // x=4
            // 6x
            llint lr = (l*(l+1)/2);
            llint rr = (r*(r+1)/2);
            
            ans = (maxSum + lr + rr)/n;
            
            // llint lchod = 0, rchod = 0;
            // cout<<ans<<"-";
            if(ans - l < 1) lchod += l - ans + 1;
            if(ans - r < 1) rchod += r - ans + 1;

            // cout<<"\n"<<lchod<<" "<<rchod<<"\n";

            l -= lchod;
            r -= rchod;
            maxSum -= (lchod + rchod);
            n -= (lchod + rchod);

            lr = (l*(l+1)/2);
            rr = (r*(r+1)/2);
            ans = (maxSum + lr + rr)/n;

            // -3 -2 -1 0        1 2 3 4 3 2
             // x-3 x-2 x-1 x x-1 x-2 = 15/6 2.
        }
        
        return (int)ans;
    }
};