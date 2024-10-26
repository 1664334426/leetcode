class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        if (nums.size() == 1)
            return 0;
        std::sort(nums.begin(), nums.end());
        int mi = nums.front(), mx = nums.front();
        for (const auto &item: nums){
            mx = max(mx, item);
            mi = min(mi, item);
        }
        int res = mx - mi;
        for (int i = 0; i < nums.size() - 1; ++i)
            res = min(res, max(nums[i] + k, nums.back() - k) - min(nums.front() + k, nums[i + 1] - k));
        return res;
    }
};