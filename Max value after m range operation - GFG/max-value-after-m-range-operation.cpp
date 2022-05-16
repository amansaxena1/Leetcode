// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{


	public:
	int findMax(int n, int m, int a[], int b[], int k[])
	{
	    map<int,int>mp;
	    for(int i=0;i<m;i++){
	        mp[a[i]]+=k[i];
	        mp[b[i]+1]-=k[i];
	    }
	    int maxi = 0, curr =  0;
	    for(auto i:mp){
	        curr += i.second;
	        maxi = max(curr,maxi);
	    }
	    return maxi;
	}

};

// { Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[m],b[m],k[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i]>>b[i]>>k[i];
        }
       

        Solution ob;
        cout <<  ob.findMax(n, m, a, b, k);
	    cout << "\n";
	     
    }
    return 0;
}



  // } Driver Code Ends