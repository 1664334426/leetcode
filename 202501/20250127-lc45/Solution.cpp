class Solution {
public:
    vector<int> nums, memo;
    int jump(vector<int>& nums) {
        this->nums = nums;
        memo.resize(nums.size() + 1, -1);
        return dfs(0);
    }
    int dfs(int idx) {
        if (idx >= (nums.size() - 1))
            return 0;
        if (memo[idx] != -1)
            return memo[idx];
        int res = 1<<25;
        for (int i = idx + 1; i <= nums[idx] + idx; ++i)
            res = min(res, dfs(i) + 1);
        return memo[idx] = res;
    }
};