class Solution {
public:
    vector<vector<vector<vector<int>>>> memo;
    vector<int> horizontalCut, verticalCut;
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        memo.resize(21, vector<vector<vector<int>>>(21, vector<vector<int>>(21, vector<int>(21, -1))));
        this->horizontalCut = horizontalCut;
        this->verticalCut = verticalCut;
        return dfs(0, m - 2, 0, n - 2);
    }
    int dfs(int xb, int xn, int yb, int yn){
        if (memo[xb][xn][yb][yn] != -1)
            return memo[xb][xn][yb][yn];
        if (xb >= xn || yb >= yn){
            int res = 0;
            if (xb >= xn && yb <= yn){
                for (int i = yb; i < yn; ++i) {
                    res += verticalCut[i];
                }
            }
            if (xb <= xn && yb >= yn){
                for (int i = xb; i < xn; ++i) {
                    res += horizontalCut[i];
                }
            }
            return memo[xb][xn][yb][yn] = res;
        }
        int res = INT_MAX;
        for (int i = xb; i < xn; ++i) {
            res = min(res, dfs(xb, i, yb, yn) + dfs(i + 1, xn, yb, yn) + horizontalCut[i]);
        }
        for (int i = yb; i < yn; ++i) {
            res = min(res, dfs(xb, xn, yb, i) + dfs(xb, xn, i + 1, yn) + verticalCut[i]);
        }
        return memo[xb][xn][yb][yn] = res;
    }
};