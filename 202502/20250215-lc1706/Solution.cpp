class Solution {
public:
    vector<vector<int>> g;
    int check(int idx){
        for (int i = 0; i < g.size(); ++i){
            if (g[i][idx] == 1){
                if (idx + 1 >= g[0].size() || g[i][idx + 1] == -1)
                    return -1;
                ++idx;
            }else if (g[i][idx] == -1){
                if (idx - 1 < 0 || g[i][idx - 1] == 1)
                    return -1;
                --idx;
            }
        }
        return idx;
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> res(grid[0].size());
        g = grid;
        for (int i = 0; i < grid[0].size(); ++i)
            res[i] = check(i);
        return res;
    }
};