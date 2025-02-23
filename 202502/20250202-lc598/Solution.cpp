class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if (ops.empty())
            return m * n;
        int x = INT_MAX, y = INT_MAX;
        for (const auto &item: ops){
            x = min(item[0], x);
            y = min(item[1], y);
        }
        return x * y;
    }
};