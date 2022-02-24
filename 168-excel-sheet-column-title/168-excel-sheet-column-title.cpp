class Solution {
public:
    string convertToTitle(int n) {
        string str= "";
        while(n>0){
            int a = n % 26;
            n/=26;
            if(a==0){ str +='Z'; n--;}
            else str +='A' + a - 1;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};