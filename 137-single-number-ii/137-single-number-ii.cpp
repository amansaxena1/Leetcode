class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int bitZ=0,bitO=0;
        vector<int>v;
        int ans = 0;

        for(int i= 0;i<32;i++){
            bitZ = 0,bitO = 0;
            for(int j=0;j<nums.size();j++){
                if(nums[j] & (1<<i)) bitO++;
                else bitZ++;
            }
            if(bitO % 3 == 1) ans += (1<<i);
            else if(bitZ % 3 == 1) ans += (0<<i);
        }
        return ans;
    }
};