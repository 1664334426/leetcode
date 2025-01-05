class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        std::sort(special.begin(), special.end());
        int res = max(special.front() - bottom, top - special.back());
        for (int i = 1; i < special.size(); ++i)
            res = max(res, special[i] - special[i - 1] - 1);
        return res;
    }
};