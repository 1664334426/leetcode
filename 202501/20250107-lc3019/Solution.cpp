class Solution {
public:
    int countKeyChanges(string s) {
        int res = 0;
        for (int i = 1; i < s.size(); ++i){
            if (tolower(s[i]) != tolower(s[i - 1]))
                ++res;
        }
        return res;
    }
};