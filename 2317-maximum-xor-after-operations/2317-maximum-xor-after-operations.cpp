class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        vector<int>bits(32, 0);
        for(auto i:nums){
            int ele = i;
            for(int i=0;i<32;i++) if(ele & (1<<i)) bits[i]++;
        }
        int ans = 0;
        for(int i=0;i<bits.size();i++) if(bits[i]) ans |= (1<<i);
        return ans;
    }
};