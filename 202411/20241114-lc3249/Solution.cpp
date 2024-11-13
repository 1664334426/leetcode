class Solution {
public:
    unordered_map<int, vector<int>> tre;
    unordered_set<int> st;
    int re = 0;
    int countGoodNodes(vector<vector<int>>& edges) {
        for (const auto &item: edges){
            tre[item[0]].push_back(item[1]);
            tre[item[1]].push_back(item[0]);
        }
        dfs(0);
        return re;
    }
    int dfs(int r) {
        st.insert(r);
        int res = 0;
        int tag = -1;
        bool isGoodNum = true;
        for (const auto &item: tre[r]){
            if (!st.count(item)){
                int t = dfs(item);
                if (tag == -1)
                    tag = t;
                if (tag != t)
                    isGoodNum = false;
                res += t;
            }
        }
        if (isGoodNum)
            ++re;
        return res + 1;
    }
};