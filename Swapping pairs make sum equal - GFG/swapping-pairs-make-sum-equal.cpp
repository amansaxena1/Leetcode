// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	bool bs(int arr[], int n, int p){
	    int l = 0, r = n;
	    while(l<=r){
	        int mid = (l+r)/2;
	        if(arr[mid] == p) return true;
	        else if(arr[mid] < p) l = mid+1;
	        else r = mid-1;
	    }
	    return false;
	}
	int findSwapValues(int A[], int n, int B[], int m)
	{
        int s1 = 0;
	    int s2 = 0;
	    sort(A,A+n);
	    sort(B,B+m);
	    for(int i=0;i<n;i++) s1 += A[i];
	    for(int i=0;i<m;i++) s2 += B[i];
	    int total = s1+s2;
	   // cout<<s1<<" "<<s2<<"\n";
	    if(total % 2 != 0) return -1;
	    int diff = (total/2) - min(s1,s2);
	   // cout<<diff<<"\n";
	    for(int i=0; i<n; i++) if((bs(B, m, A[i]-diff) && (s1 >= s2)) || (bs(B, m, A[i]+diff) && (s1 <= s2))) return 1;
	    
	    return -1;
	    
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
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends