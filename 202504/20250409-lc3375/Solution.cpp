class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (const auto &item: nums){
            if (item < k)
                return -1;
            ++mp[item];
        }
        return mp.size() - (!!mp[k]);
    }
};