class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        set<vector<int>> st;
        vector<int> ress;
        std::sort(candidates.begin(), candidates.end());
        function<void(int, int)> dfs = [&](int idx, int tag){
            if (!tag)
                res.push_back(ress);
            if (idx >= candidates.size())
                return;
            int k = idx + 1;
            for (; k < candidates.size(); ++k){
                if (candidates[k] != candidates[idx]){
                    break;
                }
            }
            dfs(k, tag);
            if (candidates[idx] <= tag){
                ress.push_back(candidates[idx]);
                dfs(idx + 1, tag - candidates[idx]);
                ress.pop_back();
            }
        };
        dfs(0, target);
        for (auto &item: res){
            std::sort(item.begin(), item.end());
            st.insert(item);
        }
        res.clear();
        for (const auto &item: st){
            res.push_back(item);
        }
        return res;
    }
};