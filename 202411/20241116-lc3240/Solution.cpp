class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int res = 0;
        for (int i = 0; i < grid.size() / 2; ++i){
            for (int j = 0; j < grid[i].size() / 2; ++j) {
                int sum = grid[i][j] + grid[grid.size() - 1 - i][j] + grid[grid.size() - 1 - i][grid[i].size() - 1 - j] + grid[i][grid[i].size() - 1 - j];
                res += min(4 - sum, sum);
            }
        }
        int diff = 0, os = 0;
        if (grid.size() % 2){
            if (grid[0].size() % 2){
                if (grid[grid.size() / 2][grid[0].size() / 2])
                    ++res;
                for (int i = 0; i < grid.size() / 2; ++i){
                    if (grid[i][grid[0].size() / 2] != grid[grid.size() - 1 - i][grid[0].size() / 2]){
                        ++diff;
                    }else{
                        if (grid[i][grid[0].size() / 2])
                            os += 2;
                    }
                }
                for (int j = 0; j < grid[0].size() / 2; ++j){
                    if (grid[grid.size() / 2][j] != grid[grid.size() / 2][grid[0].size() - 1 - j]){
                        ++diff;
                    }else{
                        if (grid[grid.size() / 2][j])
                            os += 2;
                    }
                }
            }else{
                for (int j = 0; j < grid[0].size() / 2; ++j){
                    if (grid[grid.size() / 2][j] != grid[grid.size() / 2][grid[0].size() - 1 - j]){
                        ++diff;
                    }else{
                        if (grid[grid.size() / 2][j])
                            os += 2;
                    }
                }
            }
        }else{
            if (grid[0].size() % 2){
                for (int i = 0; i < grid.size() / 2; ++i){
                    if (grid[i][grid[0].size() / 2] != grid[grid.size() - 1 - i][grid[0].size() / 2]){
                        ++diff;
                    }else{
                        if (grid[i][grid[0].size() / 2])
                            os += 2;
                    }
                }

            }
        }
        if (os % 4 == 0){
            return res + diff;
        }else{
            if (diff > 0)
                return res + diff;
            else{
                return res + 2;
            }
        }
        return 0;
    }
};