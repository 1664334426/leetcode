class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        auto tmp = grid;
        for (int i = 0; i < grid.size(); ++i){//做二维前缀和
            for (int j = 0; j < grid[i].size(); ++j){
                if (i - 1 >= 0)
                    grid[i][j] += grid[i - 1][j];
                if (j - 1 >= 0)
                    grid[i][j] += grid[i][j - 1];
                if (i - 1 >= 0 && j - 1 >= 0)
                    grid[i][j] -= grid[i - 1][j - 1];
            }
        }
        long long ret = 0;
        for (int i = 0; i < grid.size(); ++i){
            for (int j = 0; j < grid[i].size(); ++j){
                int sh = grid[i][grid[i].size() - 1], sw = grid[grid.size() - 1][j];//二维前缀和做差得出每行每列的点数
                if (i > 0)
                    sh -= grid[i - 1][grid[i].size() - 1];
                if (j > 0)
                    sw -= grid[grid.size() - 1][j - 1];
                if (sw && sh && tmp[i][j])//如果横竖的节点数量都大于0且当前i,j的值1，则枚举当前i,j为直角的数量
                    ret += 1ll * (sw - 1) * (sh - 1);
            }
        }
        return ret;
    }
};