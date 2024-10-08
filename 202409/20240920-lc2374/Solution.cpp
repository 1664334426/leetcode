class Solution {
public:
    int edgeScore(vector<int>& edges) {
        unordered_map<long long, long long> mp;
        for (int i = 0; i < edges.size(); ++i)
            mp[edges[i]] += i;
        long long res = 0, mx = 0;
        for (const auto &item: mp)
            if (item.second >= mx){
                if (mx == item.second)
                    res = min(res, item.first);
                else
                    res = item.first;
                mx = item.second;
            }
        return res;
    }
};