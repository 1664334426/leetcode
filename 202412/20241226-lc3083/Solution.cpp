class Solution {
public:
    bool isSubstringPresent(string s) {
        unordered_set<string> st;
        for (int i = 0; i < s.size() - 1; ++i){
            st.insert({s[i + 1], s[i]});
            if (st.count({s[i], s[i + 1]}))
                return true;
        }
        return false;
    }
};