class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> bxr(n + 1, 0), xr(n + 1, 0);
        for (const auto &item: trust){
            ++xr[item[0]];
            ++bxr[item[1]];
        }
        for (int i = 1; i <= n; ++i){
            if (bxr[i] == n - 1 && xr[i] == 0)
                return i;
        }
        return -1;
    }
};