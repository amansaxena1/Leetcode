class Solution {
public:
    int matrixScore(vector<vector<int>>& v) {
        for(int i=0;i<v.size();i++){
            if(v[i][0] == 0){
                for(int j=0;j<v[0].size();j++){
                    v[i][j] = (v[i][j] + 1) % 2; 
                }
            }
        }
        
        for(int i=1;i<v[0].size();i++){
            int cnt = 0;
            for(int j=0;j<v.size();j++) if(v[j][i] == 1) cnt++;
            if(cnt < ceil(v.size()/2.0)){
                for(int j=0;j<v.size();j++){
                    v[j][i] = (v[j][i] + 1) % 2;
                }
            }
        }
        
        int n = v[0].size();
        int ans = 0;
        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j] == 1) ans += (1<<(n-1-j));
            }
        }
        
        return ans;
    }
};