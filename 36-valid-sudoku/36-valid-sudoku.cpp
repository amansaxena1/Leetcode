#define llint long long int
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(llint j=0;j<9;j++){
            map<char,llint>mp;
            for(llint i=0;i<9;i++){
                if(board[j][i]!='.' && mp[board[j][i]]>=1){
                    return false;
                }
                else if(board[j][i]!='.'){
                    mp[board[j][i]]++;
                }
            }
        }
        for(llint j=0;j<9;j++){
            map<char,llint>mp;
            for(llint i=0;i<9;i++){
                if(board[i][j]!='.' && mp[board[i][j]]>=1){
                    return false;
                }
                else if(board[i][j]!='.'){
                    mp[board[i][j]]++;
                }
            }
            mp.clear();
        }
        for(llint p=0;p<3;p++){
            for(llint q=0;q<3;q++){
                map<char,llint>mp;
                for(llint i=(3*p) + 0;i< (3*p) + 3;i++){
                    for(llint j=(3*q) + 0;j<(3*q) + 3;j++){
                        if(board[i][j]!='.' && mp[board[i][j]]>=1){
                            return false;
                        }
                        else if(board[i][j]!='.'){
                            mp[board[i][j]]++;
                        }       
                    }
                }                
            }
        }
        return true;

    }
};