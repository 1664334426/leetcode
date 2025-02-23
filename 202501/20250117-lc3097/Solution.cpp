class Solution {
public:
    inline int getNum(vector<int>& tmp){
        int res = 0;
        for (int i = tmp.size() - 1; i >= 0; --i){
            res <<= 1;
            if (tmp[i] > 0)
                res |= 1;

        }
        return res;
    }
    inline void setNum(vector<int>& tmp, int num){
        int idx = 0;
        while (num){
            if (num % 2)
                ++tmp[idx];
            num >>= 1;
            ++idx;
        }
    }
    inline void delNum(vector<int>& tmp, int num){
        int idx = 0;
        while (num){
            if (num % 2)
                --tmp[idx];
            num >>= 1;
            ++idx;
        }
    }
    int minimumSubarrayLength(vector<int>& nums, int k) {
        if (k == 0){
            if (!nums.empty())
                return 1;
            return -1;
        }
        int i = 0, j = 0, res = INT_MAX;
        vector<int> tmp(32, 0);
        for (; i < nums.size(); delNum(tmp, nums[i++])) {
            while (j < nums.size() && getNum(tmp) < k){
                setNum(tmp, nums[j++]);
            }
            if (getNum(tmp) >= k)
                res = min(res, j - i);
        }
        return res == INT_MAX ? -1 : res;
    }
};