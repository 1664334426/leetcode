class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        std::sort(items.begin(), items.end());
        for (int i = 1; i < items.size(); ++i)
            items[i][1] = max(items[i][1], items[i - 1][1]);
        vector<int> res;
        vector<int> t{0, INT_MAX};
        for (const auto &item: queries){
            t[0] = item;
            auto it = std::upper_bound(items.begin(), items.end(), t);
            if (it == items.begin())
                res.push_back(0);
            else
                res.push_back((*(it - 1))[1]);
        }
        return res;
    }
};