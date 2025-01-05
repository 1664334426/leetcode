class Solution {
public:
    string rankTeams(vector<string>& votes) {
        vector<vector<int>> vec(votes[0].size(), vector(26, 0));
        for (const auto &item: votes){
            for (int i = 0; i < item.size(); ++i){
                ++vec[i][item[i] - 'A'];
            }
        }
        std::sort(votes[0].begin(), votes[0].end(), [&](char a, char b){
            for (int i = 0; i < votes[0].size(); ++i) {
                if (vec[i][a - 'A'] != vec[i][b - 'A'])
                    return vec[i][a - 'A'] > vec[i][b - 'A'];
            }
            return a < b;
        });
        return votes[0];
    }
};