// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
#define llint long long int
class Solution{
    
public:
    static bool comp(string a, string b){
	    return a+b>b+a;
	}
	string printLargest(vector<string> &arr) {
	    string ans="";
	    sort(arr.begin(),arr.end(),comp);
	    for(string s : arr)
	        ans+=s;
	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends