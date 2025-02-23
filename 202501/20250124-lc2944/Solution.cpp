class Solution {
public:
    vector<int> p, memo;
    int minimumCoins(vector<int>& prices) {
        p = prices;
        memo.resize(p.size(), -1);
        return dfs(1);
    }
    int dfs(int idx){
        if (idx > p.size())
            return 0;
        if (memo[idx - 1] != -1)
            return memo[idx - 1];
        int res = dfs(idx + idx + 1) + p[idx - 1];
        for (int i = idx + 1; i <= min((int)p.size(), 2 * idx); ++i)
            res = min(res, dfs(i)+ p[idx - 1]);
        return memo[idx - 1] = res;
    }
};