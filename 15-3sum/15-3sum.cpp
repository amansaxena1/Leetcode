class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        vector<int>temp;
        if(v.size()<3){
            return ans;
        }
        for(int i=0;i<v.size()-2;i++){
            if(i==0 || (i>0 && v[i]!=v[i-1])){
                int l=i+1,r=v.size()-1;
                while(l<r){
                    if(v[l]+v[r] == -1*v[i]){
                        temp.clear();
                        temp.push_back(v[i]);
                        temp.push_back(v[l]);
                        temp.push_back(v[r]);
                        ans.push_back(temp);
                        
                        
                        while(l<r && v[l]==v[l+1]){
                            l++;
                        }
                        while(l<r && v[r]==v[l-1]){
                            l++;
                        }
                        l++;
                        r--;
                    }
                    else if(v[l]+v[r]<-1*v[i]){
                        l++;
                    }
                    else{
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};