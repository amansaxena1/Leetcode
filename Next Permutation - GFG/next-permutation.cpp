// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        for(int i = n-1;i>=1;i--){
            if(arr[i] > arr[i-1]){
                int a = arr[i-1];
                i--;
                for(int j=n-1; j>i-1; j--) {
                    if(arr[j] > a) {
                        swap(arr[j], arr[i]);
                        break;
                    }
                }
                
                // for(int j=0; j<n; j++) {
                //     cout<<arr[j]<<" ";
                // }
                // cout<<"\n";
                
                sort(arr.begin()+i+1,arr.end());
                return arr;
            }
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends