class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> st;
        for (const auto &item: s)
            st.insert(item);
        return st.size();
    }
};