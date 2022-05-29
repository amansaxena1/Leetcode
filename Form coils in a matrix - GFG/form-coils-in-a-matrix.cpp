// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> formCoils(int n) {
        
        int m = (4*4*n*n)/2;
        vector<int>coil1(m,0);
        coil1[0] = (8*n*n) + (2*n);
        int curr = coil1[0];
        int f = 1, step = 2;
        int index = 1;
        while (index < m){
            for (int i=0; i<step; i++){
                curr = coil1[index++] = (curr - 4*n*f);
                if (index >= m)
                    break;
            }
            if (index >= m)
                break;
            for (int i=0; i<step; i++){
                curr = coil1[index++] = curr + f;
                if (index >= m)
                    break;
            }
            f = -1*f;
            step += 2;
        }
        vector<int>coil2(m,0);
        for (int i=0; i<8*n*n; i++) coil2[i] = 16*n*n + 1 -coil1[i];
        return {coil1,coil2};
    } 
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        vector<vector<int>> ptr = ob.formCoils(n);
        
        for(auto it: ptr)
        {
            for(int i: it)
                cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends