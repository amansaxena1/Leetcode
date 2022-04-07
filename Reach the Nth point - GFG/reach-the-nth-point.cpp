// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	    int helper(vector<int>&v, int n){
	        if(n==1 || n==2){
	            v[n] = n;
	            return v[n];
	        }
	        if(v[n] != -1) return v[n];
	        int res = 0;
	        res += helper(v,n-1);
	        res += helper(v,n-2);
	        v[n] = (res) % (1000000007);
	        return v[n];
	    }
	    
		int nthPoint(int n){
		    vector<int>v(n+1,-1);
		    return helper(v,n);
		  //  long long int arr[10001];
		  //  arr[1] = 1;
		  //  arr[2] = 2;
		  //  for(int i=3;i<=n;i++){
		  //      arr[i] = (arr[i-1] + arr[i-2])%1000000007;
		  //  }
		  //  return (int)arr[n];
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends