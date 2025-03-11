class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        long long it = 0, res = 0;
        for (const auto &item: nums){
            it ^= item;
            res += mp[it]++;
        }
        return res;
    }
};