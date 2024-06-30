class Solution {
public:
    vector<unordered_map<int, int>> memo;//记忆化搜索
    int findTargetSumWays(vector<int>& nums, int target) {
        memo.resize(20);
        return dfs(nums.size() - 1, target, nums); //从后往前
    }
    int dfs(int i, int tag, vector<int>& nums){
        if(i < 0){ // 当索引枚举完判断当前tag是否为0，为零即成功找放到一条表达式路径
            if (!tag) return 1;
            else return 0;
        }
        if (memo[i].count(tag)) return memo[i][tag]; //记忆化剪枝
        return memo[i][tag] = dfs(i - 1, tag + nums[i], nums) + dfs(i - 1, tag - nums[i], nums); //返回加减两种情况的总和
    }
};