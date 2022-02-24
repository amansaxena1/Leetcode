class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        map<int,long long>mp;
        for(auto i:segments){
            mp[i[0]] += i[2];
            mp[i[1]] -= i[2];
        }
        vector<vector<long long>>v;
        vector<long long>temp;
        long long l=0,r=0,maxi=0;
        for(auto i:mp){
            if(l==0){
                l = i.first; 
                maxi+=i.second;
            }
            else{
                temp.clear();
                temp.push_back(l);
                temp.push_back(i.first);
                temp.push_back(maxi);
                if(maxi != 0) v.push_back(temp);
                maxi+=i.second;
                l=i.first;
            }
            
        }
        return v;
    }
};