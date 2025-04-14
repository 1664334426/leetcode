class Solution {
public:
    bool canBeValid(string s, string locked) {
        if ((s[0] == ')' && locked[0] == '1') || s.size() % 2)
            return false;
        int mx = 1, mi = 1;
        for (int i = 1; i < s.size(); ++i){
            if (locked[i] == '0'){
                ++mx;
                --mi;
            }else if (s[i] == ')'){
                --mx;
                --mi;
            }else{
                ++mx;
                ++mi;
            }
            if (mx < 0)
                return false;
            if (mi < 0)
                mi = 1;
        }
        return mi == 0;
    }
};