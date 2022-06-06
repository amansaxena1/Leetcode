// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

#define llint long long int
class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int k)
    {
        map<llint, llint>mp;
        for(llint i=0;i<n;i++) mp[A[i]%k]++;
        llint ans = 0;
        for(auto i:mp) {
            mp[i.first]--;
            ans += (i.second * mp[(k-i.first)%k]);
            mp[i.first]++;
        }
        ans/=2;
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends