class Solution {
public:
    vector<string> validStrings(int n) {
        return dfs(n, false);
    }
    vector<string> dfs(int n, bool isZero) {
        if(n <= 0)
            return {};
        if (n == 1)
            if (isZero)
                return {"1"};
            else
                return {"0" ,"1"};
        vector<string>&& vec = dfs(n - 1, false);
        int sz = vec.size();
        for (int i = 0; i < sz; ++i)
            vec[i].push_back('1');
        if (isZero)
            return vec;
        for (const auto &item: dfs(n - 1, true))
            vec.push_back(item + "0");
        return vec;
    }
};