class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int res = 0;
        for (int i = low; i <= high; ++i) {
            int tmp = i;
            int bsz = 0;
            while (tmp){
                tmp /= 10;
                ++bsz;
            }
            if (!(bsz & 1)){
                int diff = 0;
                int h = i / (int)pow(10, bsz / 2);
                while (h){
                    diff += h % 10;
                    h /= 10;
                }
                int e = i % (int)pow(10, bsz / 2);
                while (e){
                    diff -= e % 10;
                    e /= 10;
                }
                if (!diff)
                    ++res;
            }
        }
        return res;
    }
};