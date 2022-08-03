class Solution {
public:
    string getHappyString(int n, int k) {
        k--;
        string str = "";
        for(int i=0;i<n;i++){
            if(i%2) str+='b';
            else str+='a';
        }
        while(k--){
            int ind = str.size()-1;
            while(str[ind] == 'c'){
                str[ind] = 'a';
                ind--;
                if(ind == -1) return "";
            }
            str[ind] = str[ind]+1;
            for(int i=n-1;i>=1;i--) if(i!=0 && str[i] == str[i-1]){k++;break;}
        }
        return str;
    }
};