class Solution {
public:
    vector<vector<int>> memo;
    vector<vector<int>> obstacleGrid;
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memo.resize(obstacleGrid.size(), vector(obstacleGrid[0].size(), -1));
        this->obstacleGrid = obstacleGrid;
        return dfs(0, 0);
    }
    int dfs(int x, int y) {
        if (x >= obstacleGrid.size() || x < 0 || y >= obstacleGrid[0].size() || y < 0)
            return 0;
        if (obstacleGrid[x][y] == 1)
            return 0;
        if (x == obstacleGrid.size() - 1 && y == obstacleGrid[0].size() - 1)
            return 1;
        if (memo[x][y] != -1)
            return memo[x][y];
        return memo[x][y] = dfs(x + 1, y) + dfs(x, y + 1);
    }
};