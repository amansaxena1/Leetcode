class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long ans = 0;
        int last = nums[nums.size()-1];
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i] > last){
                ans += ((nums[i]/last)-1);
                if(nums[i]%last != 0){
                    ans++;
                    last = nums[i]/((nums[i]/last)+1);
                }
            }
            else last = nums[i];
        }
        return ans;
    }
};