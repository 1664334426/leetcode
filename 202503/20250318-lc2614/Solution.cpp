class Solution {
public:
    int minSwaps(string s) {
        vector<char> stk;
        for(int i = 0; i < s.size(); ++i){
            if (s[i] == ']' && !stk.empty() && stk.back() == '['){
                stk.pop_back();
            }else{
                stk.push_back(s[i]);
            }
        }
        return (stk.size() + 3) / 4;
    }
};