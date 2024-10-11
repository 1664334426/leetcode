class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        unordered_map<int, int> mp, memo;
        int mx = -1;
        for (const auto &item: nums1){
            ++mp[item];
            if (item > mx) mx = item;
        }
        long long res = 0;
        for (const auto &item: nums2){
            if (memo.count(item)){
                res += memo[item];
                continue;
            }
            int tmp = item * k;
            int sz = 0;
            for (int i = tmp; i <= mx; i += tmp) {
                if (mp.count(i))
                    sz += mp[i];
            }
            memo[item] = sz;
            res += sz;
        }
        return res;
    }
};