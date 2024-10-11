class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        long long bitarr = 0;
        int res = 0;
        for (const auto &item: nums){
            if (1ll << item & bitarr)
                res ^= item;
            else
                bitarr |= 1ll << item;
        }
        return res;
    }
};