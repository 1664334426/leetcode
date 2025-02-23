class Solution {
public:
    const int MOD = 1e9 + 7;
    vector<int> memo3, memo4;
    int countTexts(string pressedKeys) {
        memo3.resize(pressedKeys.size() + 1, - 1);
        memo4.resize(pressedKeys.size() + 1, - 1);
        vector<vector<int>> kToNums(8);
        int tsize = 1;
        char tchar = pressedKeys[0];
        for (int i = 1; i < pressedKeys.size(); ++i){
            if (pressedKeys[i] == tchar)
                ++tsize;
            else{
                kToNums[tchar - '2'].push_back(tsize);
                tchar = pressedKeys[i];
                tsize = 1;
            }
        }
        kToNums[tchar - '2'].push_back(tsize);
        long long res = 1;
        for (int i = 0; i < kToNums.size(); ++i){
            if (i == 7 || i == 5){
                for (const auto &item: kToNums[i]){
                    res *= get4Sum(item);
                    res %= MOD;
                }
                continue;
            }
            for (const auto &item: kToNums[i]){
                res *= get3Sum(item);
                res %= MOD;
            }
        }
        return res % MOD;
    }
    int get3Sum(int idx){
        if (idx < 0)
            return 0;
        if (idx <= 1)
            return 1;
        if (memo3[idx] != -1)
            return memo3[idx];
        return memo3[idx] = (0ll + get3Sum(idx - 1) + get3Sum(idx - 2) + get3Sum(idx - 3)) % MOD;
    }
    int get4Sum(int idx){
        if (idx < 0)
            return 0;
        if (idx <= 1)
            return 1;
        if (memo4[idx] != -1)
            return memo4[idx];
        return memo4[idx] = (0ll + get4Sum(idx - 1) + get4Sum(idx - 2) + get4Sum(idx - 3) + get4Sum(idx - 4)) % MOD;
    }
};