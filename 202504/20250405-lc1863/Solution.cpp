class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int res = 0;
        for (const auto &item: nums){
            res |= item;
        }
        return res << (nums.size() - 1);
    }
};