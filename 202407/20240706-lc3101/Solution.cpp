class Solution {
public:
    vector<long long> memo;
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long ret = 0;
        memo.resize(nums.size() + 1, -1);
        for (int i = 0; i < nums.size(); ++i)//把每一个开头的数量加起来
            ret += dfs(i, nums);
        return ret;
    }
    long long dfs(int i, vector<int>& nums){ // 搜索以nums[i]起头的交替子数组的数量
        if (memo[i] != -1) return memo[i]; //记忆化
        long long ret = 1;
        if (i + 1 < nums.size() && nums[i] != nums[i + 1])// 如果下一个和当前不同，就加上nums[i + 1]的情况的数量
            ret += dfs(i + 1, nums);
        memo[i] = ret;
        return ret;
    }
};