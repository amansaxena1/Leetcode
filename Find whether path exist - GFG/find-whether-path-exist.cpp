// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    
    
    bool helper(int i, int j, vector<vector<int>>& v){
        
        if(v[i][j] == 2) return true;
        
        if(i-1>-1 && v[i-1][j] != 0){
            if(v[i-1][j] == 2) return true;
            v[i-1][j] = 0;
            if(helper(i-1, j, v)) return true;
        }
        
        if(i+1<v.size() && v[i+1][j] != 0){
            if(v[i+1][j] == 2) return true;
            v[i+1][j] = 0;
            if(helper(i+1, j, v)) return true;
        }
        
        if(j-1>-1 && v[i][j-1] != 0){
            if(v[i][j-1] == 2) return true;
            v[i][j-1] = 0;
            if(helper(i, j-1, v)) return true;
        }
        
        if(j+1<v.size() && v[i][j+1] != 0){
            if(v[i][j+1] == 2) return true;
            v[i][j+1] = 0;
            if(helper(i, j+1, v)) return true;   
        }
        
        return false;
    }
    
    bool is_Possible(vector<vector<int>>& v){
        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j] == 1){
                    return helper(i,j,v);
                }
            }
        }
        return false;
        
        
    }
};




// 30300
// 30003
// 33333
// 02300
// 30013





// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends