#define llint long long int
class Solution {
public:
    int countPrimes(int n) {
        llint ans = 0;
        vector<bool>v(n+1, true);
        
        v[0] = v[1] = false;
        
        for(llint i=2;i*i<n;i++){
            if(v[i]){
                for(llint j = i*i;j<=n;j+=i){
                    v[j] = false;
                }
            }
        }
        
        for(llint i=0;i<n;i++) if(v[i]) ans++;
        
        return ans;
        
    }
};