// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    string convert(string s, int n) {
        vector<string>v(n,"");
        if(n==1){
            return s;
        }
        int flag=1;
        int j=0;
        for(int i=0;i<s.length();i++){
            v[j]+=s[i];
            
            if(flag){
                j++;
            }
            else{
                j--;
            }
             if(j==0 or j==n-1){
                flag=!flag;
            }
           
            
        }
        string ans="";
        for(int i=0;i<n;i++){
             ans+=v[i];
        }
        return ans;
    }
};

// { Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.convert(str, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends