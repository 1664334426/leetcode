class Solution {
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        vector<unordered_map<int, int>> memo(cost.size());
        function<int(int, int)> dfs = [&](int i, int j){
            if (j > i) return 0; //递归出口
            if (i < 0) return INT_MAX >> 1; //递归未刷完出口，左移防溢出
            if (memo[i].count(j)) return memo[i][j]; //深搜剪枝叶
            int ret = min(dfs(i - 1, j + time[i]) + cost[i], dfs(i - 1, j - 1)); //选与不选，当前免费的次数大于等于当前当前剩余的墙的数量为递归出口
            memo[i][j] = ret; //记录
            return ret;
        };
        return dfs(cost.size() - 1, 0);
    }
};