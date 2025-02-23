class Solution {
public:
    vector<vector<int>> dfs(vector<int>& nums, int idx) {
        if (idx >= nums.size())
            return {};
        set<vector<int>> st;
        st.insert(vector<int>{});
        st.insert({nums[idx]});
        for (auto &item: dfs(nums, idx + 1)){
            st.insert(item);
            item.push_back(nums[idx]);
            std::sort(item.begin(), item.end());
            st.insert(item);
        }
        vector<vector<int>> res;
        for (const auto &item: st)
            res.push_back(item);
        return res;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        return dfs(nums, 0);
    }
};