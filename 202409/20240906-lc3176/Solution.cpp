class Solution {
public:
    vector<vector<int>> memo;
    int maximumLength(vector<int>& nums, int k) {
        memo.resize(nums.size() + 1, vector(k + 1, -1));
        int res = 0;
        for (int i = 0; i < nums.size() - k; ++i)//枚举不同的起点
            res = max(res, dp(i, 0, nums, k));
        return res;
    }
    int dp(int idx, int d, vector<int>& nums, int k){ //从节点idx为起点，可变数量为k - d的子序列最大长度
        if (idx >= nums.size())
            return 1;
        if(d > k)
            return 0;
        if (memo[idx][d] != -1)
            return memo[idx][d];
        int res = 1;
        for (int i = idx + 1; i < nums.size(); ++i){
            res = max(res, dp(i, d + (nums[i] != nums[idx]), nums, k) + 1);
        }
        return memo[idx][d] = res;
    }
};