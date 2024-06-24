class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> stk, ret(nums.size(), -1);
        for(int i = 0; i<nums.size(); ++i){ // 第一轮循环单调栈，算出非循环数组情况下的下一个最大元素
            while(!stk.empty() && nums[i] > nums[stk.back()]){
                ret[stk.back()] = nums[i];
                stk.pop_back();
            }
            stk.push_back(i);
        }
        for(int i = 0; i<nums.size(); ++i){ // 第二轮处理下一个最大元素在下一轮循环的问题
            while(!stk.empty() && nums[i] > nums[stk.back()]){
                ret[stk.back()] = nums[i];
                stk.pop_back();
            }
        }
        return ret;
    }
};