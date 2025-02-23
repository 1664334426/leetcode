class Solution {
public:
    vector<int> evenOddBit(int n) {
        int idx = 0, e = 0, o = 0;
        while (n){
            if (n % 2){
                if (idx % 2)
                    ++o;
                else
                    ++e;
            }
            n /= 2;
            ++idx;
        }
        return {e, o};
    }
};