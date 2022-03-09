class Solution {
public:
    string fractionToDecimal(int nn, int dd) {
        long long int n = nn;
        long long int d = dd;
        if(n==0) return "0";
        string res = "";
        if((n<0 && d > 0) || (d<0 && n > 0)) res='-';
        n = max(n, -1*n);
        d = max(d, -1*d);
        // cout<<n<<" "<<d<<" ";
        res += to_string(n/d);
        long rem = n%d;
        cout<<res;
        if(rem == 0) return res;
        res += ".";
        unordered_map<long,long> mp;
        while(rem != 0){
            if(mp.find(rem) != mp.end()){
                res.insert(res.begin() + mp[rem], '(');
                res += ')';
                break;
            }
            mp[rem] = res.size();
            rem *= 10;
            res += to_string(rem/d);
            rem = rem%d;
        }
        return res;
    }
};