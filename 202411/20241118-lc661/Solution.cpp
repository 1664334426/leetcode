class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> res = img;
        for (int i = 0; i < img.size(); ++i){
            for (int j = 0; j < img[i].size(); ++j){
                int m = 1, sum = img[i][j];
                if (i - 1 >= 0){
                    ++m;
                    sum += img[i - 1][j];
                }
                if (i + 1 < img.size()){
                    ++m;
                    sum += img[i + 1][j];
                }
                if (j + 1 < img[i].size()){
                    ++m;
                    sum += img[i][j + 1];
                }
                if (j - 1 >= 0){
                    ++m;
                    sum += img[i][j - 1];
                }
                if (i - 1 >= 0 && j - 1 < img[i].size()){
                    ++m;
                    sum += img[i - 1][j - 1];
                }
                if (i + 1 < img.size() && j - 1 < img[i].size()){
                    ++m;
                    sum += img[i + 1][j - 1];
                }
                if (i - 1 >= 0 && j + 1 < img[i].size()){
                    ++m;
                    sum += img[i - 1][j + 1];
                }
                if (i + 1 < img.size() && j + 1 < img[i].size()){
                    ++m;
                    sum += img[i + 1][j + 1];
                }
                res[i][j] = sum / m;
            }
        }
        return res;
    }
};