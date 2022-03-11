class Solution {
public:    
    bool check(int x, int y, int ind,  vector<vector<char>> &board, string word, bool status){
        if(status || ind == word.size()) return true;
        bool a = false;
        if(x < board.size()-1 && board[x+1][y] == word[ind]) {
            board[x+1][y] = '*';
            a = check(x+1, y, ind+1, board, word, false);
            board[x+1][y] = word[ind];
        }
        if(!a && x > 0 && board[x-1][y] == word[ind]){
            board[x-1][y] = '*';
            a = check(x-1, y, ind+1, board, word, false);
            board[x-1][y] = word[ind];
        }
        if(!a && y > 0 && board[x][y - 1] == word[ind]){
            board[x][y-1] = '*';
            a = check(x, y - 1, ind+1, board, word, false);
            board[x][y-1] = word[ind];
        }
        if(!a && y < board[0].size() - 1 && board[x][y + 1] == word[ind]) {
            board[x][y+1] = '*';
            a = check(x, y + 1, ind+1, board, word, false);
            board[x][y+1] = word[ind];
        }
        if(a){
            status = true;
            return true;
        }
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] == word[0]) {
                    board[i][j] = '*';
                    if(check(i, j, 1, board, word, false)) return true;
                    board[i][j] = word[0];
                }
            }
        }
        return false;
    }
};
