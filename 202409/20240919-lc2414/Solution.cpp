class Solution {
public:
    int longestContinuousSubstring(string s) {
        int sum = 1, res = sum;
        for (int i = 1; i < s.size(); ++i){
            if (s[i] - s[i - 1] == 1)
                ++sum;
            else
                sum = 1;
            res = max(res, sum);
        }
        return res;
    }
};