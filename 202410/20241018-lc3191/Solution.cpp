class Solution {
public:
    int minOperations(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size() - 2; ++i){
            if (!nums[i]){
                ++res;
                nums[i] ^= 1;
                nums[i + 1] ^= 1;
                nums[i + 2] ^= 1;
            }
        }
        if (nums[nums.size() - 1] && nums[nums.size() - 2])
            return res;
        return -1;
    }
};