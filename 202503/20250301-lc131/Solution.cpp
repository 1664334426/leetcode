class Solution {
public:
    inline bool isReverStr(string& s){
        if (s.empty())
            return false;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != s[s.size() - i - 1])
                return false;
        }
        return true;
    }
    string str;
    vector<vector<string>> res;
    void dp(int idx, vector<string>& ss){
        if (idx >= str.size()){
            if (isReverStr(ss.back())){
                res.push_back(ss);
            }else{
                return;
            }
        }
        if (ss.empty())
            ss.push_back("");
        if (isReverStr(ss.back())){
            ss.push_back(str.substr(idx, 1));
            dp(idx + 1, ss);
            ss.pop_back();
        }
        ss.back().push_back(str[idx]);
        dp(idx + 1, ss);
        ss.back().pop_back();
    }
    vector<vector<string>> partition(string s) {
        str = s;
        vector<string> v;
        dp(0, v);
        return res;
    }
};