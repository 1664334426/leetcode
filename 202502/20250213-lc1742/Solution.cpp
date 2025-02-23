class Solution {
public:
    inline int getBitSum(int n){
        int res = 0;
        while (n){
            res += n % 10;
            n /= 10;
        }
        return res;
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> umap;
        for (int i = lowLimit; i <= highLimit; ++i)
            ++umap[getBitSum(i)];
        int res = 0;
        for (const auto &item: umap)
            res = max(res, item.second);
        return res;
    }
};