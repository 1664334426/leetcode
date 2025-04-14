class Solution {
public:
    const int MOD = 1e9 + 7;
    long long fastPow(long long n){
        if (n == 0)
            return 1;
        long long res = (n % 2) ? 20 : 1;
        long long n2 = fastPow(n / 2) % MOD;
        res *= (n2 * n2) % MOD;
        res %= MOD;
        return res;
    }
    int countGoodNumbers(long long n) {
        long long res = fastPow(n / 2);
        if (n % 2){
            res *= 5;
            res %= MOD;
        }
        return res;
    }
};