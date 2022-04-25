#define llint long long int
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        llint n=nums.size(), l = 0, r = n-1, mid, left=-1, right=-1;
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid]==target) left = mid;
            if(nums[mid]<target) l = mid+1;
            else r = mid-1;
        }
        l=0;
        r=n-1;
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid]==target) right = mid;
            if(nums[mid]>target) r = mid-1;
            else l = mid+1;
        }
        return {(int)left, (int)right};
    }
};