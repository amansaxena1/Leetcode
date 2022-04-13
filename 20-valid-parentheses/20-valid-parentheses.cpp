class Solution {
public:
    bool isValid(string s) {
        vector<char>v;
        if(s.length()%2==0){
            for(int i=0;i<s.length();i++){
                if(s[i] == '(' ||  s[i] == '{' || s[i] == '['){
                    v.push_back(s[i]);
                }
                else{
                    if(v.empty()){
                        return false;
                    }
                    if(!(s[i] == v[v.size()-1] + 1 || s[i] == v[v.size()-1] + 2)){
                        return false;
                    }
                    else{
                        v.pop_back();
                    }
                }
                
            }
        }
        else if(s.length()%2!=0){
            return false;
        }
        if(!v.empty()){
            return false;
        }
        return true;
    }
};