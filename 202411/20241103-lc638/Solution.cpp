class Solution {
public:
    vector<unordered_map<string, int>> memo;
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        vector<vector<int>> spec;
        for (const auto &item: special){
            int sum = 0;
            for (int i = 0; i < item.size() - 1; ++i)
                sum += price[i] * item[i];
            if (sum > item.back())
                spec.push_back(item);
        }
        for (int i = 0; i < price.size(); ++i){
            vector<int> tmp(price.size() + 1, 0);
            tmp[i] = 1;
            tmp.back() = price[i];
            spec.push_back(tmp);
        }
        memo.resize(spec.size());
        return dfs(needs, spec, 0);
    }
    int dfs(vector<int> needs, vector<vector<int>>& spec, int idx){
        int s = 0;
        for (const auto &item: needs)
            s += item;
        if (!s)
            return 0;
        if (idx >= spec.size())
            return 1<<25;
        string key = "";
        for (const auto &item: needs)
            key.append("#").push_back(item);
        if (memo[idx].count(key))
            return memo[idx][key];
        int res = dfs(needs, spec, idx + 1);
        for (int i = 1; true; ++i) {
            for (int j = 0; j < needs.size(); ++j){
                if (spec[idx][j] * i > needs[j])
                    return memo[idx][key] = res;
                else{
                    needs[j] -= spec[idx][j];
                }
            }
            res = min(dfs(needs, spec, idx) + spec[idx].back() * i, res);
        }
        return 0;
    }
};