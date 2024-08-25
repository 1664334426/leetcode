class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        set<int> mp; // 用map存当前下标是否存在石块,结果需要升序所以没用哈希表
        for (const auto &item: nums)
            mp.insert(item);
        for (int i = 0; i < moveFrom.size(); ++i){ //如果从原地搬到原地等于没搬（有个先删还是先加的问题），当被搬点存在石头时，搬终点获得石头，被搬点石头消失
            if (mp.count(moveFrom[i])){
                mp.erase(moveFrom[i]);
                mp.insert(moveTo[i]);
            }
        }
        vector<int> ret;
        for (const auto &item: mp)//枚举存在石头的点并返回
            ret.push_back(item);
        return ret;
    }
};