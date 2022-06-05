// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *arr, int &n, int &k){
         multiset<int>s;
       vector<int>ans;
       for(int i=0;i<k;++i){
           s.insert(arr[i]);
       }
       ans.push_back(*s.rbegin());
       for(int j=k,i=0;j<n;++j,i++){
           auto itr = s.find(arr[i]);
           s.erase(itr);
           s.insert(arr[j]);
           ans.push_back(*s.rbegin());
       }
       return ans;

    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends