class Solution {
public:
    string getSmallestString(int n, int k) {
        string s="";
        for(int i=0;i<n;i++){
            s+='a';
        }
        k-=n;
        int ind = n-1;
        while(k>25){
            s[ind] = 'z';
            ind--;
            k-=25;
        }
        if(k>0){
            s[ind]+=k;
        }
        return s;
    }
};