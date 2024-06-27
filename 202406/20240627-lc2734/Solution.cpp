class Solution {
public:
    string smallestString(string s) {
        int b = 0;
        while(b < s.size() && s[b] == 'a') ++b; // 找到第一个不为a的字母
        int e = b;
        while(e < s.size() && s[e] != 'a') ++e; // 找到第一个不为a的字母后第一个为a的字母
        for(int i = b; i < e; ++i)
            --s[i];
        if(e == b) s.back() == 'a' ? s.back() = 'z' : --s.back();//过滤全部为a的情况，因为题目要求恰好一次，所以只改变最后一个
        return s;
    }
};