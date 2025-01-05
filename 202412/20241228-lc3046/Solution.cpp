class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        if (nums.size() % 2)
            return false;
        unordered_map<int, int> mp;
        for (const auto &item: nums){
            ++mp[item];
            if (mp[item] > 2)
                return false;
        }
        return true;
    }
};