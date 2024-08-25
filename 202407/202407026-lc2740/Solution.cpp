class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {//直接排序两两做差取最小值就好了
        int ret = INT_MAX;
        std::sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); ++i)
            ret = min(ret, nums[i] - nums[i - 1]);
        return ret;
    }
};