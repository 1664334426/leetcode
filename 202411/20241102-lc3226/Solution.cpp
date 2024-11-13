class Solution {
public:
    int minChanges(int n, int k) {
        int res = 0;
        while (n || k){
            if (n % 2 != k % 2){
                if (!(n % 2))
                    return -1;
                else
                    ++res;
            }
            n /= 2;
            k /= 2;
        }
        return res;
    }
};