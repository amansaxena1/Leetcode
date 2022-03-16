class Solution {
public:
    bool isPowerOfTwo(int num) {
        int cnt=0;
        while(num>0){
            cnt++;
            num = num & (num-1);
        }
        if(cnt==1) return true;
        return false;
    }
};