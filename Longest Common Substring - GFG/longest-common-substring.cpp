// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string s, string t, int n, int m)
    {
    //     a b c d g h
    //   a * - - - - -
    //   c - - * - - -
    //   d - - - * - -
    //   g - - - - * -
    //   h - - - - - *
    //   r - - - - - -
      
      int arr[n][m];
    //   int ans = 0, cnt=0;
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(s[i] == t[j]) arr[i][j] = 1;
              else arr[i][j] = 0;
          }
      }
      
    //   for(int i=0;i<n;i++){
    //       for(int j=0;j<m;j++){
    //           if(arr[i][j]) cout<<"* ";
    //           else cout<<"- ";
    //       }
    //       cout<<"\n";
    //   }
      
      int ans=0;
      
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(i >= 1 && j >= 1){
                  if(arr[i][j]) arr[i][j] += arr[i-1][j-1];
              }
              ans = max(ans, arr[i][j]);
          }
      }
      
    //   int ans = 0;
    //   for(int i=0;i<n;i++){
    //       ans = max(ans, arr[i][m-1]);
    //   }
    //   for(int i=0;i<m;i++){
    //       ans = max(ans, arr[n-1][i]);
    //   }
      return ans;
      
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends