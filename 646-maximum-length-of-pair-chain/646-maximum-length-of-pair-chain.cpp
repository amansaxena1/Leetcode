#define llint long int
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        vector<pair<llint ,llint>>v;
        for(auto i:pairs) v.push_back(make_pair(i[0], i[1]));
        llint ans=0;
        sort(v.begin(),v.end());
        llint last = INT_MIN;
        for(auto i:v){
            if(i.first > last){
                last = i.second;
                ans++;
            }
            else if(i.first <= last && i.second <= last) last = i.second;
        }
        return (int)ans;
    }
};