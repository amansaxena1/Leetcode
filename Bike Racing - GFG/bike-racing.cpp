// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

#define llint long long int
class Solution{
public:
    
    bool check(llint t, long u[], long a[], llint n, llint l, llint avg){
        llint curr = 0;
        for(llint i=0;i<n;i++) if(u[i]+(a[i]*t) >= l) curr+=(u[i]+(a[i]*t));
        if(curr > avg) return true;
        return false;
    }
    
    long buzzTime(long n, long M, long L, long H[], long A[]){
        llint l = 0, r = 1000000009;
        while(l<=r){
            llint mid = (l+r)/2;
            bool a = check(mid, H, A, n, L, M);
            bool b = check(mid-1, H, A, n, L, M);
            if(a && !b) return mid;
            else if(a) r = mid-1;
            else l = mid+1;
        }
        return 1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends