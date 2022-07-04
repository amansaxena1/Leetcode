// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n){
        long long ans = 1, a = 1, b = 2, c = 4;
        
        if(n == 1) return a;
        if(n == 2) return b;
        if(n == 3) return c;
        
        n-=3;
        for(int i=0;i<n;i++){
            long long int d = (a+b+c);
            a = b%1000000007;
            b = c%1000000007;
            c = d%1000000007;
        }
        
        return c;
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends