#define llint long long int
class Solution {
private:
public:
    
    vector<int> countRectangles(vector<vector<int>>& rectangles, vector<vector<int>>& points) {
        // map<llint,vector<llint>>mp;
        vector<vector<llint>>mp(101);
        vector<int>v;
        for(auto i:rectangles) mp[i[1]].push_back(i[0]);
        // sort(mp.begin(),mp.end(),greater)
        for(llint i=0;i<mp.size();i++) sort(mp[i].begin(), mp[i].end());
        
        
        // for(llint i=0;i<mp.size();i++){
        //     cout<<i<<" - ";
        //     for(auto j:mp[i]){
        //         cout<<j<<" ";
        //     }
        //     cout<<"\n";
        // }
        
        for(auto i:points){
            llint cnt=0;
            for(llint j=0;j<mp.size();j++){
                if(j >= i[1]){ 
                    int ans = mp[j].end() - lower_bound(mp[j].begin(), mp[j].end(), i[0]);
                    cnt+=ans;
                }
            }
            v.push_back(cnt);
        }
        
        
        
        
        return v;
        
    }
};