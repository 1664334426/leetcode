class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> mp;
        unordered_map<int, int> memo;
        unordered_map<int, int> nToS;
        vector<int> ns;
        function<int(int)> dp = [&](int idx){
            if (idx < 0)
                return 1;
            if (idx == 0)
                return 1 << nToS[ns[idx]];
            if (memo.count(idx))
                return memo[idx];
            int res = dp(idx - 1);
            if (ns[idx - 1] != ns[idx] - k)
                res += dp(idx - 1) * ((1 << nToS[ns[idx]]) - 1);
            else
                res += dp(idx - 2) * ((1 << nToS[ns[idx]]) - 1);
            return memo[idx] = res;
        };
        for (const auto &item: nums){
            mp[item % k].push_back(item);
        }
        int res = 1;
        for (auto &item: mp){
            memo.clear();
            nToS.clear();
            ns.clear();
            for (const auto &it: item.second)
                ++nToS[it];
            for (const auto &it: nToS)
                ns.push_back(it.first);
            std::sort(ns.begin(), ns.end());
            res *= dp(ns.size() - 1);
        }
        return res - 1;
    }
};