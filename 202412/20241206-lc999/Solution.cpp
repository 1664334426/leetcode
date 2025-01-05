class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); ++i){
            for (int j = 0; j < board[i].size(); ++j){
                if (board[i][j] == 'R'){
                    return scan(board, i, j);
                }
            }
        }
        return 0;
    }
    int scan(vector<vector<char>>& board, int x, int y) {
        int res = 0;
        for (int i = 1; x + i < 8; ++i){
            if (board[x + i][y] == 'p'){
                ++res;
                break;
            }
            if (board[x + i][y] == 'B')
                break;
        }
        for (int i = 1; x - i >= 0; ++i){
            if (board[x - i][y] == 'p'){
                ++res;
                break;
            }
            if (board[x - i][y] == 'B')
                break;
        }
        for (int i = 1; y + i < 8; ++i){
            if (board[x][y + i] == 'p'){
                ++res;
                break;
            }
            if (board[x][y + i] == 'B')
                break;
        }
        for (int i = 1; y - i >= 0; ++i){
            if (board[x][y - i] == 'p'){
                ++res;
                break;
            }
            if (board[x][y - i] == 'B')
                break;
        }
        return res;
    }
};