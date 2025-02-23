class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int up = 0, down = n - 1, left = 0, right = n - 1;
        vector<vector<int>> res(n, vector(n, 0));
        int k = 1;
        while (up <= down && left <= right){
            if (up <= down && left <= right) {
                for (int i = left; i <= right; ++i)
                    res[up][i] = k++;
                ++up;
            }
            if (up <= down && left <= right){
                for (int i = up; i <= down; ++i)
                    res[i][right] = k++;
                --right;
            }
            if (up <= down && left <= right){
                for (int i = right; i >= left; --i)
                    res[down][i] = k++;
                --down;
            }
            if (up <= down && left <= right){
                for (int i = down; i >= up; --i)
                    res[i][left] = k++;
                ++left;
            }
        }
        return res;
    }
};