class Solution {
public:
    vector<int> w2;
    inline bool check(vector<int>& s){
        for (int i = 0; i < 26; ++i) {
            if (s[i] < w2[i])
                return false;
        }
        return true;
    }
    long long validSubstringCount(string word1, string word2) {
        vector<int> szm(26, 0);
        w2.resize(26, 0);
        for (const auto &item: word2)
            ++w2[item - 'a'];
        int j = 0;
        long long res = 0;
        for (int i = 0; i < word1.size(); ++i){
            while (j < word1.size() && !check(szm))
                ++szm[word1[j++] - 'a'];
            if (check(szm))
                res += word1.size() - j + 1;
            --szm[word1[i] - 'a'];
        }
        return res;
    }
};