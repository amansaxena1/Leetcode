class Solution {
public:
    long long int pow(long long int a, long long int b){
        long long int ans = 1, mod = 1e9+7;
        if(a == 0) return 0;
        if(b == 0) return ans;
        
        if(b % 2 == 0) {
            ans = pow(a,b/2) % mod;
            ans = (ans * ans) % mod;
        }
        else{
            ans = (ans *a)%mod;
            ans = (ans*pow(a,b-1)) % mod;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long int cnt = 1, mod = 1e9+7;
        if(n==1) return 5;
        cnt = pow(5, (n - n/2)) % mod;
        cnt = (cnt * pow(4, n/2)) % mod;
        return cnt;
    }
};