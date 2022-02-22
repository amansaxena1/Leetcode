class Solution {
public:
    int global(vector<int>& nums, int a){
        set<int>s;
        int cnt = 0;
        for(int i=nums.size()-1; i>=0; i--){
            if(cnt>a) return -1;
            s.insert(nums[i]);
            auto it = s.find(nums[i]);
            cnt += distance(s.begin(), it);
        }
        return cnt;
    }
    int local(vector<int>& nums){
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] > nums[i+1]) cnt++;
        }
        return cnt;
    }
    bool isIdealPermutation(vector<int>& nums) {
        int b = local(nums);
        int a = global(nums,b);
        if(a==b) return true;
        return false;
    }
};