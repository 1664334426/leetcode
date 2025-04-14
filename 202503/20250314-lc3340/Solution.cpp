class Solution {
public:
    bool isBalanced(string num) {
        int res = 0;
        for(int i = 1; i < num.size(); i+= 2){
            res += num[i] - '0';
            res -= num[i - 1] - '0';
        }
        if (num.size() % 2)
            res -= num.back() - '0';
        return !res;
    }
};