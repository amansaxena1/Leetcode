class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>v(1,0);
        for(int i=0;i<n;i++){
            int a  = v.size();
            for(int j=0;j<a;j++){
                v.push_back(v[a-j-1] | 1<<i);
            }
        }
        return v;
    }
};