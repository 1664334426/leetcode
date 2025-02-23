class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        map<int, int> mxs, mis;
        int res = 0;
        for (const auto &item: arrays){
            ++mxs[item.back()];
            ++mis[item.front()];
        }
        for (const auto &item: arrays){
            --mxs[item.back()];
            if (!mxs[item.back()])
                mxs.erase(item.back());
            res = max(res, abs(mxs.rbegin()->first - item.front()));
            ++mxs[item.back()];
            --mis[item.front()];
            if (!mis[item.front()])
                mis.erase(item.front());
            res = max(res, abs(mis.rbegin()->first - item.back()));
            ++mis[item.front()];
        }
        return res;
    }
};