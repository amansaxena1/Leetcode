class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0,a=0;
        while(true){
            if(nums[i] == -1) return i;
            a=i;
            i = nums[i];
            nums[a] = -1;
        }
        return 0;
    }
};