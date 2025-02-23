class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int a = 0, b = 1;
        while (a < nums.size() && b < nums.size()){
            while (a < nums.size() && nums[a] % 2 == 0)
                a += 2;
            while (b < nums.size() && nums[b] % 2 == 1)
                b += 2;
            if (a < nums.size() && b < nums.size())
                swap(nums[a], nums[b]);
        }
        return nums;
    }
};