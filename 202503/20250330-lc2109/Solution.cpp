class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res;
        int idx = 0;
        for (int i = 0; i < s.size(); ++i){
            if (idx < spaces.size() && spaces[idx] == i){
                ++idx;
                res.push_back(' ');
            }
            res.push_back(s[i]);
        }
        return res;
    }
};