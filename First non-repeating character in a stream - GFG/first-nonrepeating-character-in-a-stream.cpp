// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    vector<pair<int,int>>v(26);
		    
		    string ans = "";
		    for(int i=0;i<s.size();i++){
		        v[s[i] - 'a'].first++;
		        v[s[i] - 'a'].second = i;
		        
		        char ch = '#';
		        int mini = INT_MAX;
		        for(int j=0; j<26; j++){
		            if(v[j].first == 1 && v[j].second < mini){
		                ch = 'a'+ j;
		                mini = v[j].second;
		            }
		        }
		        ans += ch;
		    }
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends