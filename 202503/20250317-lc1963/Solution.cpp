class Solution {
public:
    bool isz(int n){
        if (n <= 1)
            return false;
        for (int i = 2; i < n; ++i){
            if (!(n % i))
                return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i][i] > res && isz(nums[i][i]))
                res = max(nums[i][i], res);
            if (nums[i][nums.size() - i - 1] > res && isz(nums[i][nums.size() - i - 1]))
                res = max(nums[i][nums.size() - i - 1], res);
        }
        return res;
    }
};