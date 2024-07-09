class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int i : nums) sum += i; //算出数值和
        int s = 0;
        for (int i = 0; i < nums.size(); ++i) {//s是前缀和，sum是算出来的后缀和
            sum -= nums[i];
            if(sum == s) //前缀后缀相等就退出
                return i;
            s += nums[i];
        }
        return -1;
    }
};