class Solution {
public:
    vector<int> nums;
    vector<vector<int>> memo;
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (const auto &item: nums)
            sum += item;
        if (sum % 2)
            return false;
        memo.resize(nums.size() + 1, vector(sum / 2 + 1, -1));
        this->nums = nums;
        return sumTo(0, sum / 2);
    }
    bool sumTo(int idx, int sum){
        if (!sum)
            return true;
        if (idx >= nums.size())
            return false;
        if (memo[idx][sum] != -1)
            return memo[idx][sum];
        bool res = sumTo(idx + 1, sum);
        if (nums[idx] <= sum)
            res = sumTo(idx + 1, sum - nums[idx]) || res;
        return memo[idx][sum] = res;
    }
};