class Solution {
public:
    vector<int> goodSubsetofBinaryMatrix(vector<vector<int>>& grid) { //由题可知， 目标是找到一列全部都是0的二维数组或者任意两个同位不同时为一的数组
        unordered_map<int, int> mp; //因为n<5,所以可以用int存第二维的01，key是第二维的01，value是他的一维索引
        for(int i = 0; i < grid.size(); ++i){
            int n = 0;
            for(int j = 0; j < grid[0].size(); ++j){ //状态压缩，把数组的01压缩到一个int上
                n |= grid[i][j];
                n <<= 1;
            }
            if(!n) return {i}; //如果这个数组全部为零则全部返回
            for(auto& kv : mp){ //枚举map的key，用&去排除两个数同一位同时为一的情况，如果满足条件最近返回
                if(!(kv.first & n))
                    return {kv.second, i};
            }
            mp[n] = i;
        }
        return {};
    }
};