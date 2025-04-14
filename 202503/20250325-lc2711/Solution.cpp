class Solution {
public:
    vector<vector<int>> g;
    void dfs(int i, int j, unordered_map<int, int>& ps, unordered_map<int, int>& ns){
        if (i >= g.size() || j >= g[0].size())
            return;
        int t = g[i][j];
        int p = ps.size();
        ++ps[t];
        dfs(i + 1, j + 1, ps, ns);
        --ps[t];
        if (!ps[t])
            ps.erase(t);
        g[i][j] = abs(p - (int)ns.size());
        ++ns[t];
        return;
    }
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        g = grid;
        unordered_map<int, int>a, b;
        for (int i = 0; i < grid.size(); ++i){
            a.clear();
            b.clear();
            dfs(i ,0, a, b);
        }
        for (int j = 1; j < grid[0].size(); ++j){
            a.clear();
            b.clear();
            dfs(0 ,j, a, b);
        }
        return g;
    }
};