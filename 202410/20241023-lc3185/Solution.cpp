class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        array<int, 24> memo;
        long long res = 0;
        for (const auto &item: hours){
            res += memo[(24 - (item % 24)) % 24];
            ++memo[item % 24];
        }
        return res;
    }
};