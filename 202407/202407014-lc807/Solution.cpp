class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> h(grid.size()), w(grid[0].size());
        for (int i = 0; i < grid.size(); ++i) {//找到行最大值
            int ma = -1;
            for (int j = 0; j < grid[0].size(); ++j)
                ma = max(ma, grid[i][j]);
            h[i] = ma;
        }
        for (int i = 0; i < grid[0].size(); ++i) {//找到列最大值
            int ma = -1;
            for (int j = 0; j < grid.size(); ++j)
                ma = max(ma, grid[j][i]);
            w[i] = ma;
        }
        int ret = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j){
                int mi = min(h[i], w[j]);
                if(grid[i][j] < mi) //如果当前楼层小于行列最小值，则可以增加高度
                    ret += mi - grid[i][j];
            }
        }
        return ret;
    }
};