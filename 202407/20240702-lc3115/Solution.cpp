class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        unordered_set<int> st = { //100的内质数集合
                2, 3, 5, 7, 11,
                13, 17, 19, 23, 29,
                31, 37, 41, 43, 47,
                53, 59, 61, 67, 71,
                73, 79, 83, 89, 97
        };
        int backi = nums.size() - 1, fronti = 0;
        while (!st.count(nums[backi])) --backi;//找到最后的一个质数
        while (!st.count(nums[fronti])) ++fronti;//找到第一个出现的质数
        return backi - fronti;//返回最大距离
    }
};