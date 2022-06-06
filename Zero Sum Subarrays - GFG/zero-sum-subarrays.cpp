// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

#define llint long long int
class Solution{
    public:
    //Function to count subarrays with sum equal to 0
    llint calc(llint n, llint r){
        return (n * (n-1)) / 2;
    }
    
    ll findSubarray(vector<ll> arr, int n ) {
        for(llint i=0;i<n;i++) if(i>0) arr[i] += arr[i-1];
        map<llint, llint>mp;
        llint ans = count(arr.begin(),arr.end(),0);
        for(llint i=0; i<n; i++) mp[arr[i]]++;
        for(auto i:mp) ans += calc(i.second,2);
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends