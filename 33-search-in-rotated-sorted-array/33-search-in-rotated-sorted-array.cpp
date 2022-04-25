#define llint long long int
class Solution {
public:
    int find_pivot(vector<int>& nums){
        int r=nums.size()-1,l=0;
        if(nums[0]<nums[r]) return 0;
        
        while(l<=r){
            int mid = (l+r)/2;
            if(mid == 0) return 1;
            if(nums[mid] < nums[mid-1]) return mid;
            else if(nums[mid] > nums[0]) l = mid+1;
            else if(nums[mid] < nums[0]) r = mid-1;
        }
        
        return 0;
    }
    llint bs(llint l, llint r, vector<int>&v, llint target){
        llint ans = 0, mid;
        while(l<=r){
            mid = (l+r)/2;
            if(v[mid] == target) return mid;
            if(v[mid] > target) r = mid-1;
            if(v[mid] < target) l = mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        llint p = find_pivot(nums);
        // cout<<p<<" ";
        llint a = bs(0, p-1, nums, target);
        if(a==-1) a = bs(p, nums.size()-1, nums, target);
        return a;
    }
};