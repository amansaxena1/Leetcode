// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int nums[], int n){
        int reach = 0, maxi = 0, ans = 0;
        
        for(int i=0;i<n-1;i++){
            
            if(i+nums[i] > maxi){
                maxi = i+nums[i];
            }
            
            if(i==reach){
                if(maxi==i) return -1;
                ans++;
                reach = maxi;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends