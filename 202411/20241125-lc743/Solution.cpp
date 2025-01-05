class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        struct cmp{
            bool operator ()(pair<int, int>& a, pair<int, int>& b){
                return a.second > b.second;
            }
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pque;
        unordered_map<int, vector<pair<int, int>>> mp;
        unordered_set<int> st;
        for (const auto &item: times)
            mp[item[0]].push_back({item[1], {item[2]}});
        pque.push({k, 0});
        int res = -1;
        while (!pque.empty()){
            auto at = pque.top();
            pque.pop();
            if (!st.count(at.first)){
                st.insert(at.first);
                res = max(res, at.second);
                for (const auto &item: mp[at.first])
                    pque.push({item.first, at.second + item.second});
            }
        }
        for (int i = 1; i <= n; ++i){
            if (!st.count(i))
                return -1;
        }
        return res;
    }
};