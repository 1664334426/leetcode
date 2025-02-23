class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> umap;
        for (const auto &item: arr){
            ++umap[item];
            if (umap[item] > (arr.size() / 4))
                return item;
        }
        return -1;
    }
};