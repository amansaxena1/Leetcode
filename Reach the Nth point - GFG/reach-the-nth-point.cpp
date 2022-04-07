// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    long long int arr[10001];
		    arr[1] = 1;
		    arr[2] = 2;
		    for(int i=3;i<=n;i++){
		        arr[i] = (arr[i-1] + arr[i-2])%1000000007;
		    }
		    return (int)arr[n];
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