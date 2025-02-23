class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long>lnums(nums.size(), 0);
        lnums[0] = nums[0];
        for (int i = 1; i < lnums.size(); ++i)
            lnums[i] += lnums[i - 1] + nums[i];
        long long res = 0;
        for (int i = 0; i < lnums.size() - 1; ++i){
            if (lnums[i] >= lnums.back() - lnums[i])
                ++res;
        }
        return res;
    }
};