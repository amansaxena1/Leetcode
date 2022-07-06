// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        bool neg = false;
        int st = 0, ans = 0;
        if(str[st] == '-'){
            st++;
            neg = true;
        }
        for(int i=st;i<str.length();i++){
            if(!isdigit(str[i])) return -1;
            ans = ans*10 + (str[i]-'0');
        }
        if(neg) ans*=(-1);
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
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends