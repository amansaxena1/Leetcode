#define llint long long int
class Solution {
public:
    
    int fun(vector<int>nums, bool req, int cnt){
        int n = nums.size();
        for(llint i=1;i<n;i++){
            if(req && nums[i] <= nums[i-1]){
                int maxi = nums[i-1];
                for(;i<n;i++){
                    maxi = min(nums[i],maxi);
                    if(nums[i] > maxi) break;
                    cnt++;
                }
            }
            else if(!req && nums[i] >= nums[i-1]){
                int mini = nums[i-1];
                for(;i<n;i++){
                    mini = max(nums[i],mini);
                    if(nums[i] < mini) break;
                    cnt++;
                }
            }
            req = !req;
        }
        return cnt;
    }
    
    int wiggleMaxLength(vector<int>& nums) {
        llint n = nums.size();
        // true - greater
        // false - less
        int ans = min(fun(nums, true, 0), fun(nums, false, 0));
        return nums.size() - ans;
    }
};