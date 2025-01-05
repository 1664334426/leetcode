class Solution {
public:
    unordered_map<int, int> memo;
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        unordered_map<int, vector<int>> mp;
        vector<int> res;
        for (const auto &item: queries){
            mp[item.front()].push_back(item.back());
            memo.clear();
            res.push_back(dfs(0, mp, n));
        }
        return res;
    }
    int dfs(int i, unordered_map<int, vector<int>>& mp, int n){
        if (i >= n - 1)
            return 0;
        if (memo.count(i))
            return memo[i];
        int res = dfs(i + 1, mp, n);
        for (const auto &item: mp[i])
            res = min(res, dfs(item, mp, n));
        return memo[i] = res + 1;
    }
};