class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int maxIdx = 0;
        vector<int> dp(nums.size(), 1), pre(nums.size(), -1);
        for (int i = 1; i < nums.size(); ++i){
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0){
                    if (dp[j] + 1 > dp[i]){
                        dp[i] = dp[j] + 1;
                        pre[i] = j;
                    }
                }
                if (dp[i] > dp[maxIdx]){
                    maxIdx = i;
                }
            }
        }
        vector<int> res;
        while (maxIdx != -1){
            res.push_back(nums[maxIdx]);
            maxIdx = pre[maxIdx];
        }
        return res;
    }
};