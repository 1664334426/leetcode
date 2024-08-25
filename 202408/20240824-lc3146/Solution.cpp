class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> memo(27);
        for (int i = 0; i < s.size(); ++i)
            memo[s[i] -'a'] = i;
        int res = 0;
        for (int i = 0; i < t.size(); ++i)
            res += abs(i - memo[t[i] - 'a']);
        return res;
    }
};