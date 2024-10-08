class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int mx = values[0];
        int res = 0;
        for (int i = 1; i < values.size(); ++i){
            res = max(res, values[i] + mx - i);
            mx = max(mx, values[i] + i);
        }
        return res;
    }
};