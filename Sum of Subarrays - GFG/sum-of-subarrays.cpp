// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long subarraySum(long long a[], long long n){
        vector<long long int>v(n);
        long long int ans = 0;
        v[0] = n;
        v[n-1] = n;
        int ele = n-2;
        for(long long int i=1;i<ceil(n/2.0);i++){
            v[i] = v[i-1] + ele;
            ele -= 2;
        }
        for(int i=n-1;i>=n/2;i--) v[i] = v[n-i-1];
        for(int i=0;i<n;i++) {
            ans += (v[i]*a[i]) % (1000000007);
            ans %= (1000000007);
            
        }
        
    //         1
    //       2 2  
    //       3 4 3
    //      4 6 6 4
    //     5 8 9 8 5
    //  6 10 12 12 10 6
     
     
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
 {
     long long t; 
     cin>>t;
     while(t--)
     {
         long long n; cin>>n;
         long long a[n+5];
         for(long long i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.subarraySum(a, n)<<endl;
     }
    return 0;
}
  // } Driver Code Ends