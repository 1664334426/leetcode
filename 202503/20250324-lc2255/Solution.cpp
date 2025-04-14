class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int res = 0;
        for (const auto &item: words){
            if(item.size() <= s.size()){
                bool tag = true;
                for (int i = 0; i < item.size(); ++i){
                    if (item[i] != s[i]){
                        tag = false;
                        break;
                    }
                }
                if (tag)
                    ++res;
            }
        }
        return res;
    }
};