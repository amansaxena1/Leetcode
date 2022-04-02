class Solution {
public:
    long long numberOfWays(string s) {
        vector<long long int>zero(s.length(),0), one(s.length(),0);
        for(long long int i=0; i<s.length(); i++){
            if(s[i] == '0'){
                if(i>0) zero[i] = zero[i-1] + 1;
                else zero[i] = 1;
                
                if(i>0)
                one[i] = one[i-1];
            }
            else{
                if(i>0) one[i] = one[i-1] + 1;
                else one[i] = 1;
                
                if(i>0)
                zero[i] = zero[i-1];
            }
        }
        
        // for(auto i: zero) cout<<i<<" ";
        // cout<<"\n";
        // for(auto i: one) cout<<i<<" ";
        // cout<<"\n";

        long long int z = count(s.begin(),s.end(), '0');
        long long int o = count(s.begin(),s.end(), '1');

        long long int ans = 0;
        for(long long int i=1;i<s.length()-1;i++){
            if(s[i] == '1') ans += zero[i-1] * (z - zero[i-1]);
            else ans += one[i-1] * (o - one[i-1]);
            
            // cout<<ans<<" ";
        }
        return ans;
    }
};