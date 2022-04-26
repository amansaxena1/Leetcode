#define llint long long int
class Solution {
public:
    llint find_row(vector<vector<int>>& matrix, int target){
        llint n=matrix.size(), l = 0, r = n-1, mid;
        while(l<=r){
            mid = (l+r)/2;
            if(matrix[mid][0] == target) return mid+1;
            if(matrix[mid][0] < target) l = mid + 1;
            else if(matrix[mid][0] > target) r = mid-1;
        }
        return l;
    }
   bool binary(vector<vector<int>>& matrix, llint a, int target){
        llint n=matrix[a].size(), l = 0, r = n-1, mid;
        while(l<=r){
            mid = (l+r)/2;
            if(matrix[a][mid] == target) return true;
            else if(matrix[a][mid] > target) r = mid-1;
            else l = mid + 1;
        }
        return false;
    }    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        llint a = find_row(matrix, target) - 1;
        cout<<a<<" ";
        if(a<0) return false;
        return binary(matrix, a, target);
    }
};