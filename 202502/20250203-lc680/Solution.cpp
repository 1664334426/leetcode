class Solution {
public:
    bool validPalindrome(string s) {
        bool tag = true;
        int idx = 0;
        for (int i = 0; i < s.size() / 2; ++i){
            if (s[i] != s[s.size() - i - 1]){
                tag = false;
                idx = i;
                break;
            }
        }
        if (tag)
            return true;
        tag = true;
        for (int i = idx; i < s.size() / 2; ++i){
            if (s[i] != s[s.size() - i - 2]){
                tag = false;
                break;
            }
        }
        if (tag)
            return true;
        tag = true;
        for (int i = idx; i < s.size() / 2; ++i){
            if (s[i + 1] != s[s.size() - i - 1]){
                tag = false;
                break;
            }
        }
        if (tag)
            return true;
        return false;
    }
};