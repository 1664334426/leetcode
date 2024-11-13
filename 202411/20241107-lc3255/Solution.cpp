class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int p = 0;
        for (int i = 1; i < k; ++i){
            if (nums[i] - nums[i - 1] != 1)
                p = i;
        }
        vector<int> res{p ? -1 : nums[k - 1]};
        for (int i = k; i < nums.size(); ++i) {
            if (nums[i] - nums[i - 1] != 1)
                p = i;
            res.push_back(i - p + 1 >= k ? nums[i] : -1);
        }
        return res;
    }
};