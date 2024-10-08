class Solution {
public:
    vector<int> memo;
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        memo.resize(days.size() + 1, -1);
        return dfs(days, costs, 0);
    }
    int dfs(vector<int>& days, vector<int>& costs, int idx){
        int i = idx;
        if (idx >= days.size())
            return 0;
        if (memo[idx] != -1)
            return memo[idx];
        int nxt = days[idx];
        ++idx;
        int res = dfs(days, costs, idx) + costs[0];
        nxt += 6;
        while (idx < days.size() && days[idx] <= nxt)
            ++idx;
        res = min(dfs(days, costs, idx) + costs[1], res);
        nxt += 23;
        while (idx < days.size() && days[idx] <= nxt)
            ++idx;
        res = min(dfs(days, costs, idx) + costs[2], res);
        return memo[i] = res;
    }
};