class Solution {
public:
    vector<vector<vector<double>>> memo;
    int n;
    double knightProbability(int n, int k, int row, int column) {
        this->n = n;
        memo.resize(n + 1, vector(n + 1, vector(k + 1, 0.0)));
        return dp(row, column, k);
    }
    double dp(int x, int y, int d){
        if (x >= n || x < 0 || y >= n || y < 0)
            return 0;
        if (!d)
            return 1;
        if (memo[x][y][d])
            return memo[x][y][d];
        double res = 0;
        res += dp(x + 2, y + 1, d - 1);
        res += dp(x - 2, y + 1, d - 1);
        res += dp(x + 2, y - 1, d - 1);
        res += dp(x - 2, y - 1, d - 1);
        res += dp(x + 1, y + 2, d - 1);
        res += dp(x - 1, y + 2, d - 1);
        res += dp(x + 1, y - 2, d - 1);
        res += dp(x - 1, y - 2, d - 1);
        return memo[x][y][d] = res / 8;
    }
};