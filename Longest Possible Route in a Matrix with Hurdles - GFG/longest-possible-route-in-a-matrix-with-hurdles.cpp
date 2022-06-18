// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
#define llint int
class Solution{
public:

    llint helper(llint xs, llint ys, llint xd, llint yd, llint cnt, vector<vector<int>>matrix){
        llint a = 0;
        if(xs == xd && ys == yd) a = cnt;
        matrix[xs][ys] = 0;
        if(xs+1 < matrix.size() && matrix[xs + 1][ys] == 1) a = max(a, helper(xs+1, ys, xd,yd, cnt+1, matrix));
        if(xs-1 >= 0 && matrix[xs - 1][ys] == 1) a = max(a, helper(xs-1, ys, xd,yd, cnt+1, matrix));
        if(ys+1 < matrix[0].size() && matrix[xs][ys + 1] == 1) a = max(a, helper(xs, ys+1, xd,yd, cnt+1, matrix));
        if(ys-1 >= 0 && matrix[xs][ys - 1] == 1) a = max(a, helper(xs, ys-1, xd,yd, cnt+1, matrix));
        matrix[xs][ys] = 1;
        if(a == 0) return -1;
        return a;
    }

    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd){
        if(xs == xd && ys == yd) return 0;
        llint ans = helper(xs,ys,xd,yd,0,matrix);
        if(ans <= 0 || matrix[xs][ys] == 0 || matrix[xd][yd] == 0) return -1;
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends