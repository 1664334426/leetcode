class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        vector<int> stk;
        vector<int> nxtMax(nums.size());
        nxtMax.back() = nums.back();
        for (int i = nums.size() - 2; i >= 0; --i)
            nxtMax[i] = max(nxtMax[i + 1], nums[i]);
        long long res = 0;
        for (int i = 0; i < nums.size() - 1; ++i){
            while (!stk.empty() && stk.back() < nums[i])
                stk.pop_back();
            stk.push_back(nums[i]);
            res = max(res, (stk.front() * 1ll - stk.back()) * nxtMax[i + 1]);
        }
        return res;
    }
};