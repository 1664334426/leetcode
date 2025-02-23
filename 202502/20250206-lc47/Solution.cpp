class Solution {
public:
    set<vector<int>> st;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        unordered_map<int, int> jh;
        vector<vector<int>> res;
        for (const auto &item: nums)
            ++jh[item];
        vector<int> v;
        dfs(v, jh);
        for (const auto &item: st)
            res.push_back(item);
        return res;
    }
    void dfs(vector<int>& v, unordered_map<int, int>& j){
        if (j.empty())
            st.insert(v);
        auto d = j;
        for (const auto &item: j){
            v.push_back(item.first);
            --d[item.first];
            if (d[item.first] <= 0)
                d.erase(item.first);
            dfs(v, d);
            v.pop_back();
            ++d[item.first];
        }
    }
};