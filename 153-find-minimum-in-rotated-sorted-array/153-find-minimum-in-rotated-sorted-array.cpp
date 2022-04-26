#define llint long long int
class Solution {
public:
    
    llint find_pivot(vector<int>&v){
        llint l = 0, r = v.size()-1, mid;
        if(v[r] >= v[0]) return v[0];
        
        while(l<=r){
            mid = (l+r)/2;
            if(mid == 0) return v[1];
            if(v[mid] < v[mid-1]) return v[mid];
            if(v[mid] > v[0]) l = mid + 1;
            else r = mid - 1;
        }
        return v[mid];
    }
    
    
    int findMin(vector<int>& nums) {
        return find_pivot(nums);
    }
};