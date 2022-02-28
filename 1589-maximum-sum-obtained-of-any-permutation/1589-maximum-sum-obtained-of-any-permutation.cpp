class Solution {
public:
    const long long mod = 1e9+7;
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        int n = nums.size();
        vector<int>sub(n,0);
        for(auto i: requests){
            sub[i[0]]++;
            if(i[1] < n-1) sub[i[1]+1]--;
        }
        long long res = sub[0];
        for(int i=1;i<n;i++){
            res+=sub[i];
            sub[i]=res;
        }
        sort(sub.begin(),sub.end());
        sort(nums.begin(),nums.end());
        res=0;
        for(int i=0;i<n;i++){
            res+=((nums[i]%mod) * (sub[i]%mod))%mod;
            res%=mod;
        }
        return res;
    }
};