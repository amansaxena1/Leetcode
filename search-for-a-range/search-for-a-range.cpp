class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0,r = nums.size()-1;
        int first = -1,second = -1, mid;
        if(nums.size() == 0){
            return {-1,-1};
        }
        while(l < r){
            mid = (l+r)/2;
            if(nums[mid] < target){
                l = mid+1;
            }
            else if(nums[mid] >= target){
                r = mid;
            }
        }
        if(nums[r] == target) {
            first = r;
            l = r;
            r = nums.size()-1;
            
            while(l <= r){
                mid = (l+r)/2;
                if(nums[mid] > target){
                    r = mid-1;
                }
                else if(nums[mid] == target){
                    second = mid;
                    l = mid+1;
                }
            }
            if(nums[mid] == target) second = mid;
        }
        else{
            return {-1,-1};
        }        
        return {first,second};
    }
};