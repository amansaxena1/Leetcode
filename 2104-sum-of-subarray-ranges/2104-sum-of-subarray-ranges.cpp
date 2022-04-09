#define llint long long int
class Solution {
public:
    
    llint maxi(llint a, llint b) {return a > b ? a : b;}
    llint mini(llint a,llint b) {return  a < b ? a : b;}

    
    long long subArrayRanges(vector<int>& nums) {

        llint ans=0, n = nums.size();
        for(llint i=0;i<n;i++){
            llint maxi = nums[i];
            llint mini = nums[i];
            for(llint j=i;j<n;j++){
                maxi = max(maxi, (llint)nums[j]);
                mini = min(mini, (llint)nums[j]);    
                ans += maxi - mini;
            }
        }
        return ans;
        
    }
};