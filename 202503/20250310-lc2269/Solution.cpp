class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int t = num;
        long long i = 0, res = 0, mod = pow(10, k + 1);
        for (int j = 0; j < k - 1; ++j) {
            i += (t % 10) * pow(10, j);
            t /= 10;
        }
        for (int j = k - 1; t > 0; ++j) {
            i += (t % 10) * pow(10, k - 1);
            if (i != 0 && !(num % i))
                ++res;
            i /= 10;
            t /= 10;
        }
        return res;
    }
};