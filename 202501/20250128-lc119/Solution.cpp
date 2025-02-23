class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v{1};
        for (int i = 0; i < rowIndex; ++i){
            vector<int> tmp;
            for (int j = 0; j <= v.size(); ++j){
                if (j - 1 < 0)
                    tmp.push_back(v[j]);
                else if (j == v.size())
                    tmp.push_back(v[j - 1]);
                else
                    tmp.push_back(v[j] + v[j - 1]);
            }
            v = move(tmp);
        }
        return v;
    }
};