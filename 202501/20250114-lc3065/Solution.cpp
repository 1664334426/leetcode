class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int res = 0;
        for (const auto &item: nums)
            if (item < k)
                ++res;
        return res;
    }
};