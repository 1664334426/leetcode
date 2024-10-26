class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        double mi = INT_MAX;
        for (int i = 0; i < nums.size() / 2; ++i){
            mi = min(mi, (nums[i] + nums[nums.size() - i - 1]) / 2.0);
        }
        return mi;
    }
};