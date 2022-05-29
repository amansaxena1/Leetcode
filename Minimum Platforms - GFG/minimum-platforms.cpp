// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        map<int,int>mp;
    // 	vector<pair<int,int>>v;
    	for(int i=0;i<n;i++) {
    	    mp[arr[i]]++;
    	    mp[dep[i]+1]--;
    	}
        // sort(v.begin(),v.end());
        vector<int>v(2360,0);
        for(auto i:mp){
            v[i.first] = i.second;
        }
        for(int i=0;i<v.size();i++){
            if(i>0) v[i] = v[i] + v[i-1];
        }
        int ans = *max_element(v.begin(),v.end());
        return ans;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends