class Solution {
public:
    inline int getMaxIntAndPop(map<int, int>& mp){
        int res = mp.rbegin()->first;
        --mp[res];
        if (mp[res] <= 0)
            mp.erase(res);
        return res;
    }
    inline int getMinIntAndPop(map<int, int>& mp){
        int res = mp.begin()->first;
        --mp[res];
        if (mp[res] <= 0)
            mp.erase(res);
        return res;
    }
    int maxCoins(vector<int>& piles) {
        map<int, int> mp;
        for (const auto &item: piles)
            ++mp[item];
        int res = 0, idx = 0;
        while (!mp.empty()){
            if (idx % 3 == 0)
                getMaxIntAndPop(mp);
            else if (idx % 3 == 1)
                res += getMaxIntAndPop(mp);
            else
                getMinIntAndPop(mp);
            ++idx;
        }
        return res;
    }
};