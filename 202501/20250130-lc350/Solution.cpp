class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        for (const auto &item: nums1)
            ++mp[item];
        vector<int> res;
        for (const auto &item: nums2){
            if (mp.count(item)){
                res.push_back(item);
                --mp[item];
                if (!mp[item])
                    mp.erase(item);
            }
        }
        return res;
    }
};