class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<string, int> umap;
        for (auto &item: words){
            std::sort(item.begin(), item.end());
            string res;
            for (const auto &i: item){
                if (res.empty() || res.back() != i)
                    res.push_back(i);
            }
            ++umap[res];
        }
        int res = 0;
        for (const auto &item: umap){
            if (item.second >= 2)
                res += ((item.second - 1) * item.second) / 2;
        }
        return res;
    }
};