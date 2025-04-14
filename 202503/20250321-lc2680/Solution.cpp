class Solution {
public:
    vector<int> nums;
    int k;
    long long res = 0;
    long long dfs(int idx, long long p) {
        if (idx >= nums.size())
            return 0;
        long long t = (1l * nums[idx]) << k;
        long long n = dfs(idx + 1, p | nums[idx]);
        res = max(res, t | n | p);
        return n | nums[idx];
    }
    long long maximumOr(vector<int>& nums, int k) {
        this->nums = nums;
        this->k = k;
        dfs(0, 0);
        return res;
    }
};