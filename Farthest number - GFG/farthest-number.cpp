// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
#define llint long long int
class Solution{   
  public:
    vector<int> farNumber(int n, vector<int> v){
        // 1 1 2 2 4
        vector<int>ans;
        vector<int>temp(n, INT_MAX);
        temp[n-1] = v[n-1];
        for(llint i = n-2; i >= 0; i--) temp[i] = min(v[i], temp[i+1]);
        // for(auto i: temp) cout<<i<<"-";
        // cout<<"\n";
        for(llint i=0;i<n;i++){
            llint a = lower_bound(temp.begin()+i+1, temp.end(), v[i]) - temp.begin() - 1; 
            // cout<<a<<"\n";
            if(v[a] < v[i]) ans.push_back(a);
            else ans.push_back(-1);
        }
        return ans;
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends