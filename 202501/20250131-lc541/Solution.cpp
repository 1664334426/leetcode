class Solution {
public:
    string reverseStr(string s, int k) {
        string res = "";
        for (int i = 0; i < s.size(); i+=k) {
            auto ss = s.substr(i, k);
            if (!((i / k) % 2))
                std::reverse(ss.begin(), ss.end());
            res.append(ss);
        }
        return res;
    }
};