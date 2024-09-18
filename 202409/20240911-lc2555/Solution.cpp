class Solution {
public:
    unordered_map<int, int> mp;
    int maximizeWin(vector<int>& prizePositions, int k) {
        for (const auto &item: prizePositions)
            ++mp[item];
        vector<int> keyset;
        for (const auto &item: mp)
            keyset.push_back(item.first);
        std::sort(keyset.begin(), keyset.end());
        int beg = 0;
        int sum = mp[keyset[0]];
        int res = sum;
        vector<int> p(keyset.size()), n(keyset.size());
        p[0] = sum;
        for (int i = 1; i < keyset.size(); ++i){
            while (keyset[i] - keyset[beg] > k){
                sum -= mp[keyset[beg]];
                ++beg;
            }
            sum += mp[keyset[i]];
            res = max(res, sum);
            p[i] = res;
        }
        beg = keyset.size() - 1;
        n[beg] = res = sum = mp[keyset[beg]];
        for (int i = keyset.size() - 2; i >= 0; --i){
            while (keyset[beg] - keyset[i] > k){
                sum -= mp[keyset[beg]];
                --beg;
            }
            sum += mp[keyset[i]];
            res = max(res, sum);
            n[i] = res;
        }
        res = max(n[0], p[p.size() - 1]);
        for (int i = 1; i < n.size(); ++i){
            res = max(res, n[i] + p[i - 1]);
        }
        return res;
    }
};
