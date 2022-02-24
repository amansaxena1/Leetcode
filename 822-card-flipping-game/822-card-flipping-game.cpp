class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        int n= fronts.size();
//         for(int i=0;i<n;i++){
//             if(fronts[i] < backs[i] ){
//                 swap(fronts[i] , backs[i]);
//             }
//         }
        
//         map<int,bool>mp;
//         for(int i=0;i<n;i++){
//             if(mp[fronts[i]] == false && fronts[i] == backs[i]){
//                mp[fronts[i]] = true; 
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(!mp[backs[i]]) return backs[i];
//         }
        map<int,int>mp;
        set<int>s;
        for(int i=0;i<n;i++){
            if(fronts[i] == backs[i]){
                mp[fronts[i]]++;
            }
            s.insert(fronts[i]);
            s.insert(backs[i]);
        }
        for(auto i:s){
            if(mp[i] >= 1) continue;
            return i;
        }
        
        
        return 0;
        
    }
};