class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            if(abs(nums[l]-0)>abs(nums[r]-0)){
                v.push_back(nums[l]*nums[l]);
                l++;
            }
            else{
                v.push_back(nums[r]*nums[r]);
                r--;
            }
        }
       reverse(v.begin(),v.end());
       return v;
               
    }
};