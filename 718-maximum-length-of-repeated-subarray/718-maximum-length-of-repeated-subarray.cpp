class Solution {
public:
    int findLength(vector<int>& s, vector<int>& t) {
        int n= s.size();
        int m=t.size();
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