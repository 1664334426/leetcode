class Solution {
public:
    vector<vector<int>> memo;
    int maxTotalReward(vector<int>& rewardValues) {
        std::sort(rewardValues.begin(), rewardValues.end());
        memo.resize(rewardValues.size(), vector<int>(2 * rewardValues.back(), -1));
        return dp(rewardValues, 0, 0);
    }
    int dp(vector<int>& rewardValues, int idx, int sum){
        if (idx >= rewardValues.size())
            return sum;
        if(sum > rewardValues.back())
            return sum;
        if (memo[idx][sum] != -1)
            return memo[idx][sum];
        if(rewardValues[idx] <= sum)
            return memo[idx][sum] = dp(rewardValues, idx + 1, sum);
        return memo[idx][sum] = max(dp(rewardValues, idx + 1, sum + rewardValues[idx]), dp(rewardValues, idx + 1, sum));
    }
};