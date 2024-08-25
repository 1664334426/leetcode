class Solution {
public:
    const int MOD = 1e9 + 7;
    vector<vector<vector<int>>> memo;
    int numberOfStableArrays(int zero, int one, int limit) {
        memo.resize(zero + 1, vector<vector<int>>(one + 1, vector<int>((limit + 2) * 2, -1)));//记忆化缓存
        return dp(zero, one, limit, 0);
    }
    long long dp(int zero, int one, int limit, int nx) {//增加有个参数nx表示当前连续0/1的个数
        if (memo[zero][one][nx + limit + 1] != -1)//减枝
            return memo[zero][one][nx + limit + 1];
        if (limit + 1 == abs(nx))//如果出现连续limit+1个0/1，直接抛弃
            return 0;
        if ((!zero) && (!one))//当上面条件不成立，但0和1都用完的情况下，满足条件返回1
            return 1;
        long long ret = 0;
        if (zero)//有0时再扣
            ret += dp(zero - 1, one, limit, nx < 0 ? nx - 1 : -1);
        if (one)//同上
            ret += dp(zero, one - 1, limit, nx > 0 ? nx + 1 : 1);
        return memo[zero][one][nx + limit + 1] = ret % MOD;
    }
};