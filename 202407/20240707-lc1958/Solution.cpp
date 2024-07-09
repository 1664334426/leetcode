class Solution {
public:
    bool checkMove(vector<vector<char>>& board, int rMove, int cMove, char color) {
        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                if(i == 0 && j == 0) continue;//过滤0,0这种情况
                int x = rMove + i, y = cMove + j;
                if(x >= 0 && x < board.size() && y >= 0 && y < board[0].size()){
                    if(color == 'B'){
                        if(board[x][y] != 'W') //找到第一个如果不是跟color相反的颜色或者没颜色直接跳出
                            continue;
                        while (x >= 0 && x < board.size() && y >= 0 && y < board[0].size() && board[x][y] == 'W'){//找出后面第一个不是color相反颜色的x,y
                            x += i;
                            y += j;
                        }
                    }else{ //同上
                        if(board[x][y] != 'B')
                            continue;
                        while (x >= 0 && x < board.size() && y >= 0 && y < board[0].size() && board[x][y] == 'B'){
                            x += i;
                            y += j;
                        }
                    }
                }
                if(x >= 0 && x < board.size() && y >= 0 && y < board[0].size() && board[x][y] == color)//过滤x,y越界和没有颜色的情况
                    return true;
            }
        }
        return false;
    }
};