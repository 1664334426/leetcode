class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int h = 0, l = 0;
        for (int i = 0; i < grid.size(); ++i){
            int p = grid[i].size() - 1;
            for (int j = 0; j < grid[i].size() / 2; ++j){
                if (grid[i][j] != grid[i][p - j])
                    ++h;
            }
        }
        for (int i = 0; i < grid[0].size(); ++i){
            int p = grid.size() - 1;
            for (int j = 0; j < grid.size() / 2; ++j){
                if (grid[j][i] != grid[p - j][i])
                    ++l;
            }
        }
        return min(h, l);
    }
};