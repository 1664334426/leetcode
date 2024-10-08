class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        long long res = 0;
        if (pattern[0] == pattern[1]){
            int sz = -1;
            for (const auto &item: text){
                if (item == pattern[0]){
                    ++sz;
                    res += sz;
                }
            }
            return res + sz + 1;
        }
        int p0sz = text.back() == pattern[0], p1sz = text.back() == pattern[1];
        for (int i = text.size() - 2; i >= 0; --i){
            if (text[i] == pattern[1])
                ++p1sz;
            else if (text[i] == pattern[0]){
                ++p0sz;
                res += p1sz;
            }
        }
        return res + max(p1sz, p0sz);
    }
};