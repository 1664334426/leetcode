class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() == 1) return true;
        for (int i = 2; i < word.size(); ++i) { //判断word[1]开始后面的字母大小写是否相等，出现字母大小写不相等直接返回
            if(
                !(word[i] >= 'a' && word[i] <= 'z' && word[i - 1] >= 'a' && word[i - 1] <= 'z') &&
                !(word[i] >= 'A' && word[i] <= 'Z' && word[i - 1] >= 'A' && word[i - 1] <= 'Z')
                ) return false;
        }
        if (word[0] >= 'a' && word[0] <= 'z') return word[1] >= 'a' && word[1] <= 'z'; //第一个为小写第二个只能为小写
        return true;
    }
};