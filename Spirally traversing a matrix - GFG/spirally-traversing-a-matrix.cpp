// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > v, int h, int g) 
    {
        
        // 5  11  30
        // 5  19  19
        
        vector<int>ans;
        int l=0,r=v[0].size()-1,b=v.size()-1,t=0;
        // cout<<l<<r<<t<<b<<"\n";
        while(l <= r || t <= b){
            if(ans.size() == g*h) break;
            for(int i=l;i<=r;i++) ans.push_back(v[t][i]);
            t++;
            if(ans.size() == g*h) break;
            for(int i=t;i<=b;i++) ans.push_back(v[i][r]);
            r--;
            if(ans.size() == g*h) break;
            for(int i=r;i>=l;i--) ans.push_back(v[b][i]);
            b--;
            if(ans.size() == g*h) break;
            for(int i=b;i>=t;i--) ans.push_back(v[i][l]);
            l++;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends