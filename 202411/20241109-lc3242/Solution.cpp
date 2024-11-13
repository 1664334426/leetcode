class NeighborSum {
public:
    unordered_map<int, pair<int, int>> mp;
    vector<vector<int>> ads;
    vector<vector<int>> dis;
    NeighborSum(vector<vector<int>>& grid) {
        ads.resize(grid.size(), vector<int>(grid[0].size(), 0));
        dis.resize(grid.size(), vector<int>(grid[0].size(), 0));
        for (int i = 0; i < grid.size(); ++i){
            for (int j = 0; j < grid[i].size(); ++j){
                if (i - 1 >= 0){
                    if (j - 1 >= 0)
                        dis[i][j] += grid[i - 1][j - 1];
                    if (j + 1 < grid.size())
                        dis[i][j] += grid[i - 1][j + 1];
                    ads[i][j] += grid[i - 1][j];
                }
                if (i + 1 < grid.size()){
                    if (j - 1 >= 0)
                        dis[i][j] += grid[i + 1][j - 1];
                    if (j + 1 < grid.size())
                        dis[i][j] += grid[i + 1][j + 1];
                    ads[i][j] += grid[i + 1][j];
                }
                if (j + 1 < grid.size())
                    ads[i][j] += grid[i][j + 1];
                if (j - 1 >= 0)
                    ads[i][j] += grid[i][j - 1];
                mp[grid[i][j]] = {i, j};
            }
        }
    }

    int adjacentSum(int value) {
        return ads[mp[value].first][mp[value].second];
    }

    int diagonalSum(int value) {
        return dis[mp[value].first][mp[value].second];
    }
};