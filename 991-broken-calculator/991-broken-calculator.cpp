class Solution {
public:
    int brokenCalc(int a, int b) {
        int p = 0, q = 0, aa = a, bb = b;
        while(true){
            // cout<<b<<" ";
            if(a >= b) break;
            if(b % 2 != 0) b++;
            else b/=2;
            p++;
        }
        if(a!=b) p += abs(b-a);
        return p;
        
        // a = aa;
        // b = bb;
        // while(true){
        //     if(a >= b) break;
        //     if(b % 2 != 0) b--;
        //     else a++;
        //     p++;
        // }
        // if(a<b) p += abs(b-a);
    }
};