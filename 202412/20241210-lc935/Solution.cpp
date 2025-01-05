class Solution {
public:
    vector<vector<int>> memo;
    const int MOD = 1e9 + 7;
    int knightDialer(int n) {
        memo.resize(n + 1, vector(10, -1));
        long long res = 0;
        for (int i = 0; i < 10; ++i) {
            res += dfs(n, i);
            res %= MOD;
        }
        return res;
    }
    int dfs(int n, int idx){
        if (n == 1) return 1;
        if (memo[n][idx] != -1) return memo[n][idx];
        if (idx == 0)
            return memo[n][idx] = (0ll +dfs(n - 1, 4) + dfs(n - 1, 6)) % MOD;
        if (idx == 1)
            return memo[n][idx] = (0ll +dfs(n - 1, 8) + dfs(n - 1, 6)) % MOD;
        if (idx == 2)
            return memo[n][idx] = (0ll +dfs(n - 1, 7) + dfs(n - 1, 9)) % MOD;
        if (idx == 3)
            return memo[n][idx] = (0ll +dfs(n - 1, 4) + dfs(n - 1, 8)) % MOD;
        if (idx == 4)
            return memo[n][idx] = (0ll +dfs(n - 1, 3) + dfs(n - 1, 9) + dfs(n - 1, 0)) % MOD;
        if (idx == 6)
            return memo[n][idx] = (0ll +dfs(n - 1, 1) + dfs(n - 1, 7) + dfs(n - 1, 0)) % MOD;
        if (idx == 7)
            return memo[n][idx] = (0ll +dfs(n - 1, 2) + dfs(n - 1, 6)) % MOD;
        if (idx == 8)
            return memo[n][idx] = (0ll +dfs(n - 1, 1) + dfs(n - 1, 3)) % MOD;
        if (idx == 9)
            return memo[n][idx] = (0ll +dfs(n - 1, 4) + dfs(n - 1, 2)) % MOD;
        return memo[n][idx] = 0;
    }
};