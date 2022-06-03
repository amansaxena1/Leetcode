#define llint long long int
class NumMatrix {
public:
    vector<vector<int>> v;
    NumMatrix(vector<vector<int>>& matrix) {
        v=matrix;
        for(llint i=0;i<v.size();i++) for(llint j=0;j<v[0].size();j++) if(j>0) v[i][j] = v[i][j] + v[i][j-1];
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        llint ans = 0;
        for(llint i=row1;i<=row2;i++) ans += (v[i][col2] - ((col1 > 0) ? v[i][col1-1] : 0));
        return (int)ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */