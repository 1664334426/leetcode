class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> ret;
        for (int i = 0; i < variables.size(); ++i) { // 快速幂判断，符合条件即加入ret队列
            if(fast_pow(fast_pow(variables[i][0], variables[i][1], 10), variables[i][2], variables[i][3]) == target)
                ret.push_back(i);
        }
        return ret;
    }
    int fast_pow(int x, int y, int mod){//快速幂
        if(y == 0) return 1;
        if(y == 1) return x % mod;//这个模容易忽略，
        int ret = fast_pow(x, y >> 1, mod);
        ret = (ret * ret) % mod;
        if(y & 1)
            ret = (ret * x) % mod;
        return ret;
    }
};