// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
#define llint long long int
class Solution
{
    public:
    
    void fun(string str, llint curr, llint open, llint close, vector<string>&ans){
        if(curr == 0 && open == 0 && close == 0){
            ans.push_back(str);
        }
        if(curr < 0) return;
        if(open > 0) fun(str+'(', curr+1, open-1, close, ans);
        if(close > 0) fun(str+')', curr-1, open, close-1, ans);
    }
    
    vector<string> AllParenthesis(int n) {
        llint open = n, close = n;
        llint curr = 0;
        string str = "";
        vector<string>ans;
        
        fun(str, curr, open, close, ans);
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
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends