class Solution {
public:
    int minOperations(vector<int>& nums) {
        int res = 0;
        for (const auto &item: nums){
            if (!item ^ (res % 2))
                ++res;
        }
        return res;
    }
};