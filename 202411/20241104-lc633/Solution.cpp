class Solution {
public:
    bool judgeSquareSum(int c) {
        if (!c)
            return true;
        for (long long i = 1; i * i <= c; ++i) {
            int t = c - i * i;
            double d = pow(t, 0.5);
            if (d - (int) d < 0.00001)
                return true;
        }
        return false;
    }
};