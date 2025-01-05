class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        std::sort(score.begin(), score.end(), [&](auto a, auto b){
            return b[k] < a[k];
        });
        return score;
    }
};