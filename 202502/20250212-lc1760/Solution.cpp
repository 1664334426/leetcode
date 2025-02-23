class Solution {
public:
    vector<int> ns;
    int minimumSize(vector<int>& nums, int maxOperations) {
        ns = nums;
        int mx = 0;
        for (const auto &item: nums)
            mx = max(mx, item);
        int l = 1, r = mx + 1;
        while (l < r){
            int mid = (l + r) / 2;
            if (getSizeByMaxNum(mid) <= maxOperations){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        return r;
    }
    int getSizeByMaxNum(int mn){
        int res = 0;
        for (const auto &item: ns){
            res += (item / mn);
            if (!(item % mn))
                res -= 1;
        }
        return res;
    }
};