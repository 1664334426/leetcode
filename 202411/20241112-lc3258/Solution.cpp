class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int res = 0;
        for (int i = 0; i < s.size(); ++i){
            int s0 = 0, s1 = 0;
            for (int j = i; j < s.size(); ++j){
                if (s[j] - '0')
                    ++s1;
                else
                    ++s0;
                if (min(s1, s0) <= k)
                    ++res;
            }
        }
        return res;
    }
};