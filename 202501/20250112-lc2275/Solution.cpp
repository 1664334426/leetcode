class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int res = 1;
        for (int i = 0; i < 31; ++i) {
            int tmp = 0;
            for (int j = 0; j < candidates.size(); ++j){
                if (((candidates[j] & (1 << i)) > 0))
                    ++tmp;
            }
            res = max(res, tmp);
        }
        return res;
    }
};