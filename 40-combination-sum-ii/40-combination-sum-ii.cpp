class Solution {
public:
    void helper(int ind, vector<int>temp, vector<vector<int>>&ans, int target, vector<int> &arr){
        if(target == 0) {
            ans.push_back(temp);
            return;
        }
        if(target < 0 || ind >= arr.size()) return;
        for(int i = ind; i<arr.size(); i++){
            if(i > ind && arr[i] == arr[i-1]) continue;
            temp.push_back(arr[i]);
            helper(i+1, temp, ans, target-arr[i], arr);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &arr, int target){
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>temp;
        helper(0, temp, ans, target, arr);
        return ans;
    }

};