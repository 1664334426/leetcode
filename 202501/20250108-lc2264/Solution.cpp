class Solution {
public:
    char mx = '\0';
    string largestGoodInteger(string num) {
        for (int i = 2; i < num.size(); ++i){
            if (num[i] == num[i - 1] && num[i] == num[i - 2])
                mx = max(mx, num[i]);
        }
        if (mx){
            return string{mx, mx, mx};
        }
        return "";
    }
};