class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<vector<int>> vec(n, vector(11, 0));
        unordered_set<int> st;
        for (const auto &item: pick){
            ++vec[item[0]][item[1]];
            if (vec[item[0]][item[1]] > item[0]){
                st.insert(item[0]);
            }
        }
        return st.size();
    }
};