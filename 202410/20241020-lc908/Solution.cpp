class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx = INT_MIN, mi = INT_MAX;
        for (const auto &item: nums){
            mx = max(mx, item);
            mi = min(mi, item);
        }
        return max(mx - mi - 2 * k, 0);
    }
};