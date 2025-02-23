class Solution {
public:
    vector<int> p;
    int maxDistance(vector<int>& position, int m) {
        std::sort(position.begin(), position.end());
        p = std::move(position);
        int l = 0, r = p.back() - p.front() + 1;
        while (l < r){
            int mid = (r + l + 1) / 2;
            if (getMaxMByRangeSize(mid) >= m){
                l = mid;
            }else{
                r = mid - 1;
            }
        }
        return r;
    }
    inline int getMaxMByRangeSize(int rsize){
        int res = 1;
        int tag = p[0];
        for (const auto &item: p){
            if (item - tag >= rsize){
                tag = item;
                ++res;
            }
        }
        return res;
    }
};