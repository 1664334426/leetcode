class Solution {
public:
    vector<vector<int>> memo;//缓存
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        memo.resize(nums1.size() + 1, vector(nums2.size() + 1, -1));
        return dp(0, 0, nums1, nums2);
    }
    int dp(int idx1, int idx2, vector<int>& nums1, vector<int>& nums2) {//记忆化搜索
        if (idx1 >= nums1.size() || idx2 >= nums2.size()) // 越界直接结束
            return 0;
        if (memo[idx1][idx2] != -1) //记忆化
            return memo[idx1][idx2];
        int res = 0;
        if (nums1[idx1] == nums2[idx2]) //当遇到相同的时候+1，不同则枚举两边各自的+1
            res = dp(idx1 + 1, idx2 + 1, nums1, nums2) + 1;
        else
            res = max(dp(idx1 + 1, idx2, nums1, nums2), dp(idx1, idx2 + 1, nums1, nums2));
        return  memo[idx1][idx2] = res; //返回并记录
    }
};