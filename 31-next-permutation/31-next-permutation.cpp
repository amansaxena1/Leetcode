class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),ind=0,diff = INT_MAX;
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                for(int j=i;j<n;j++){
                    if(nums[j] > nums[i-1] && abs(nums[j] - nums[i-1]) < diff) {
                        ind = j;
                        diff = abs(nums[j] - nums[i-1]);
                    }
                }
                swap(nums[i-1],nums[ind]);
                ind = i;
                break;
            }
        }
        sort(nums.begin()+ind,nums.end());
    }
};