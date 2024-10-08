class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> ump;
        for (const auto &item: paths){
            ++ump[item[0]];
            ump[item[1]] = ump[item[1]];
        }
        for (const auto &item: ump){
            if (!item.second)
                return item.first;
        }
        return "";
    }
};