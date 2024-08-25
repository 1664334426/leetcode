class Solution {
public:
    int minimumOperations(string num) {
        if (num.length() == 1) return num[0] != '0';
        bool next5 = false, next0 = false; //从后往枚举，当前位置i的后面有5或0的标记
        for (int i = num.size() - 1; i >= 0; --i){
            if (num[i] == '5'){//判断是否为5，是的话把标记为设为true
                next5 = true;
            }else if (num[i] == '0'){//判断是否为0，区别是00后缀这种情况也是满足条件的，所以第一次遇到后缀0直接跳出
                if (!next0){
                    next0 = true;
                    continue;
                }
            }
            if (num[i] == '2' || num[i] == '7'){ //当后缀有5时，只要当前i为2或者7变即可组成25和75，所以直接返回
                if (next5)
                    return num.size() - i - 2;
            }
            if (num[i] == '0' || num[i] == '5'){//同上，当后缀是00和50时也满足条件，上面已经把00这种情况给排除了
                if (next0)
                    return num.size() - i - 2;
            }
        }
        for (const auto &item: num){//其他情况，如果数字中有0，就把除0外其他都删掉就好
            if (item == '0')
                return num.size() - 1;
        }
        return num.size(); //否则全部删掉
    }
};