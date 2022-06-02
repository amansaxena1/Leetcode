// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 
#define llint long long
class Solution{
    public:
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    
    
    long long countPairs(int X[], int Y[], int M, int N)
    {
       vector<double>a,b;
       for(llint i=0;i<M;i++) a.push_back(X[i]/log((double)X[i]));
       for(llint i=0;i<N;i++) b.push_back(Y[i]/log((double)Y[i]));
       
       sort(b.begin(),b.end());
       sort(a.begin(),a.end());
       
    //   for(auto i:a) cout<<i<<" ";
    //   cout<<"\n";
    //   for(auto i:b) cout<<i<<" ";
       
       
       
       llint ans = 0;
       for(llint i=0;i<a.size();i++){
           llint aa = (b.end() - upper_bound(b.begin(),b.end(),a[i]));
           ans += (aa > 0 ? aa :0);
       }
       
    
       return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends