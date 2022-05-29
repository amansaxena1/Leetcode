// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends

#define llint long long int
class Solution
{
    public:
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        llint l = 0, r = n-1;
        while(l<=r){
            llint mid = (l+r)/2;
            if(matrix[mid][0] == x) return true;
            else if(matrix[mid][0] < x) l = mid + 1;
            else r = mid - 1;
        }
        llint a = l-1;
        for(int row=0;row<=a;row++){
            l = 0;
            r = m-1;
            while(l<=r){
                llint mid = (l+r)/2;
                if(matrix[row][mid] == x) return true;
                else if(matrix[row][mid] < x) l = mid + 1;
                else r = mid - 1;
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {

 		int n, m;
    	cin>> n>> m;
        vector<vector<int> > matrix(n);
            
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        int x;
        cin>>x;
        Solution obj;
        if (obj.search(matrix,n,m,x)) 
            cout << "1\n"; 
        else
            cout << "0\n"; 
    }
	return 0; 
} 

  // } Driver Code Ends