#define llint long long int
class Solution {
public:
    llint min(llint a, int b) { return a>b ? b:a;}
    llint max(llint a, int b) { return a<b ? b:a;}
    int findUnsortedSubarray(vector<int>& nums) {
        llint n = nums.size(), mini = INT_MAX, maxi = INT_MIN, l = n-1, r = n-1, f=0;
        for(llint i = n-1; i >=0 ; i--){
            mini = min(mini, nums[i]);
            if(mini < nums[i]) {
                l = i;
                f=1;
            }
        }
        if(!f) return 0;
        for(llint i = 0; i < n; i++){
            maxi = max(maxi, nums[i]);
            if(maxi > nums[i]) r = i;
        }
        return r-l+1;
    }
};