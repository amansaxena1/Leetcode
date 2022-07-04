// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++
#define llint long long int



class Solution {
  public:
    int fun(int a){
        return log2(a&-a);
    }
  
    int minVal(int a, int b) {
        llint ca = 0, cb = 0, t, da=0, db=0;
        t = a;
        while(a){
            ca += a & 1;
            a >>= 1;
        }
        a = t;
        t = b;
        while(b){
            cb += b & 1;
            b >>= 1;
        }
        b = t;
        // cout<<ca<<" "<<cb<<" "<<a<<" "<<b<<"\n";
        if(ca>cb){
            llint n = 0;
            t = a;
            while(ca != cb){
                if(a & (1<<n)) {
                    a = (a & ~(1 << n));
                    ca--;
                }
                n++;
            }
            return a;
        }
        else if(ca<cb){
            while(cb != ca){
                cb--;
                a = a | (1 << fun(~a));
            }
            return a;
        }
        return a;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends