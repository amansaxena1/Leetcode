class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n<4) return false;
        if(ceil(n/4.0) == floor(n/4.0)) return isPowerOfFour(n/4);
        return false;
    }
};