class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int a=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            a^=nums[i];
        }
        long long int b = log2(a&(~(a-1)));
        cout<<b<<"\n";
        long long int p=0,q=0,c = 1<<b;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&c){
                p^=nums[i];
            }
            else {
                q^=nums[i];
            }
        }
        v.push_back(p);
        v.push_back(q);
        return v;
        
    }
};