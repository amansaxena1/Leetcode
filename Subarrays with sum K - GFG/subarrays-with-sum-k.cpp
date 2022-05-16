// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int nums[], int N, int k)
    {
        // int ans = 0, t=0;
        
        // map<int,int>mp;
        // mp[0]=1;
        // for(int i=0;i<N;i++) {
        //     t += Arr[i];
        //     if(t == k) ans += (1 + mp[0]);
        //     else ans += mp[k - t];
        //     mp[t]++;
        // }
        
        // return ans;
        int sum=0;int j=0;
        int count=0;
        map<int,int>mp;
        mp[0]=1;
       
        for(int i=0;i<N;i++)
        {
            sum+=nums[i];
            count+=mp[sum-k];
              mp[sum]++;
            
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends