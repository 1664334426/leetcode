class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;//双指针
        while (i + 1 < nums.size() && nums[i + 1] > nums[i]) ++i;//找出前缀最长递增子序列
        if (i == nums.size() - 1)
            return nums.size() * (nums.size() + 1) >> 1;//全数组都是递增的特判
        int ret = i + 2;// 下面是枚要删除的后缀的数量，ret初值是当要删除的为最后一个的情况
        while (j == nums.size() - 1 || nums[j + 1] > nums[j]) {//枚举当要删除的为nums[j]的数量
            while (i >= 0 && nums[j] <= nums[i]) --i;
            ret += i + 2;
            --j;
        }
        return ret;
    }
};