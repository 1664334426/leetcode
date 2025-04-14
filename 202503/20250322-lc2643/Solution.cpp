class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> res = {0, -1};
        for (int i = 0; i < mat.size(); ++i){
            int sum = 0;
            for (const auto &item: mat[i])
                sum += item;
            if (sum > res[1]){
                res[0] = i;
                res[1] = sum;
            }
        }
        return res;
    }
};