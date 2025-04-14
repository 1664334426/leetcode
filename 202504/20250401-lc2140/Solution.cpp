class Solution {
public:
    vector<long long> memo;
    vector<vector<int>> questions;
    long long dp(int idx){
        if (idx >= questions.size())
            return 0;
        if (memo[idx] != -1)
            return memo[idx];
        return memo[idx] = max(dp(idx + 1), dp(idx + questions[idx][1] + 1) + questions[idx][0]);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        memo.resize(questions.size(), -1);
        this->questions = questions;
        return dp(0);
    }
};