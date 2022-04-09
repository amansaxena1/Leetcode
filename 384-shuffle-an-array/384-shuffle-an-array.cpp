class Solution {
    vector<int> v;
    public:
    Solution(vector<int>& nums) {
        v=nums;
    }
    
    vector<int> reset() {
        return v;
    }
    
    vector<int> shuffle() {
        int n = v.size();
        vector<int>u=v;
        for(int i=0;i<n;i++){
            swap(u[i],u[rand()%n]);
        }
        return u;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */