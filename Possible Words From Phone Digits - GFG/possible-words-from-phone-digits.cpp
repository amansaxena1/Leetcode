// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    void combinations(map<int, vector<char>>mp, int mapInd, string &curr, vector<string>&ans, int given[], int currInd, int N){
        
        // int N = sizeof(given)/sizeof(given[0]);
        if(mapInd >= mp[given[currInd]].size()) {
            if(currInd >= N) ans.push_back(curr);
            return;
        }
        string temp = curr + mp[given[currInd]][mapInd];
        combinations(mp, 0, temp, ans, given, currInd+1, N);
        combinations(mp, mapInd + 1, curr, ans, given, currInd, N);
    }
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int digits[], int N)
    {
        map<int, vector<char>>mp;
        mp.insert(pair<int,vector<char>>(2,{'a','b','c'}));
        mp.insert(pair<int,vector<char>>(3,{'d','e','f'}));
        mp.insert(pair<int,vector<char>>(4,{'g','h','i'}));
        mp.insert(pair<int,vector<char>>(5,{'j','k','l'}));
        mp.insert(pair<int,vector<char>>(6,{'m','n','o'}));
        mp.insert(pair<int,vector<char>>(7,{'p','q','r','s'}));
        mp.insert(pair<int,vector<char>>(8,{'t','u','v'}));
        mp.insert(pair<int,vector<char>>(9,{'w','x','y','z'}));
        
        vector<string>v;
        string str="";
        if(!N) return v;
        combinations(mp, 0, str, v, digits, 0, N);
        return v;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends