class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        for (int j = 0; j < matrix[0].size(); ++j){
            int mx = -1;
            for (int i = 0; i < matrix.size(); ++i)//这个循环找这列最大值
                mx = max(mx, matrix[i][j]);
            for (int i = 0; i < matrix.size(); ++i){//循环替换-1为最大值
                if (matrix[i][j] == -1)
                    matrix[i][j] = mx;
            }
        }
        return matrix;
    }
};