class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_map<int, int> umap;
        for (const auto &item: nums){
            while (umap[item] >= res.size())
                res.push_back({});
            res[umap[item]].push_back(item);
            ++umap[item];
        }
        return res;
    }
};