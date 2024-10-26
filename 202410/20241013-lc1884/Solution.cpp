class Solution {
public:
    array<int, 1001> memo;
    int twoEggDrop(int n) {
        if(n == 1) return 1;
        if (memo[n] != 0)
            return memo[n];
        memo[n] = INT_MAX;
        for (int i = 1; i < n; ++i){
            memo[n] = min(memo[n], max(i - 1, twoEggDrop(n - i)) + 1);
        }
        return memo[n];
    }
};