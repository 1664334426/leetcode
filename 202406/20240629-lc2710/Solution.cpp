class Solution {
public:
    string removeTrailingZeros(string num) {
        int i = num.size() - 1;
        for (; i >= 0; --i){
            if (num[i] != '0') //从后往前找到第一个不是0是数字
                break;
        }
        return num.substr(0, i + 1); //直接剪切字符串
    }
};