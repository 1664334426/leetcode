class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int res = 1e9+7;
        for (int i = 0; i < nums.size(); ++i){
            for (int j = i + 1; j <= nums.size(); ++j){
                int tmp = nums[i];
                if (tmp >= k)
                    res = min(res, 1);
                for (int t = i + 1; t < j; ++t) {
                    tmp |= nums[t];
                    if (tmp >= k){
                        res = min(res, j - i);
                        break;
                    }

                }
            }
        }
        return res == 1e9+7 ? -1 : res;
    }
};