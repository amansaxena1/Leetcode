#define llint long long int
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<llint>v;
        for(llint i=0;i<ops.size();i++){
            if(ops[i] == "C") v.pop_back();
            else if(ops[i] == "D") v.push_back(2*v[v.size()-1]);
            else if(ops[i] == "+") v.push_back(v[v.size()-1] + v[v.size()-2]);
            else v.push_back(stoi(ops[i]));
        }
        return accumulate(v.begin(),v.end(),0);
    }
};