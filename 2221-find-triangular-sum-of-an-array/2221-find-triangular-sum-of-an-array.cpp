class Solution {
public:
    int triangularSum(vector<int>& v) {
        vector<int>temp;
        while(v.size() > 1){
            temp.clear();
            for(int i=0;i<v.size()-1;i++){
                temp.push_back((v[i] + v[i+1])%10);
            }
            v.clear();
            v = temp;
        }
        return v[0];
    }
};