class Solution {
public:
    vector<int> ans;
    
    int aman(vector<int> &ds, vector<int> &nums, int freq[], int &k){
        if(ds.size() == nums.size()){
            k--;
            if(k==0) {
                ans = ds;
                return 1;
            }
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                if(aman(ds, nums, freq, k)) return 1;
                freq[i] = 0;
                ds.pop_back();
            }
        }
        return 0;
    }
    
    string getPermutation(int n, int k) {
        vector<int>nums;
        int freq[n];
        vector<int> ds;
        for(int i=0;i<n;i++) {
            nums.push_back(i+1);
            freq[i]=0;
        }
        int a = aman(ds, nums, freq, k);
        string str = "";
        for(int i=0;i<ans.size();i++){
            str += to_string(ans[i]);
        }
        return str;
    }
};