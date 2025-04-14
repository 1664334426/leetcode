class Solution {
public:
    long long minimumCost(string s) {
        long long res = 0;
        for (int i = 1; i < s.size(); ++i){
            if (s[i] != s[i - 1])
                res += min(i, (int)s.size() - i);
        }
        return res;
    }
};