class Solution {
public:
    string getSmallestString(string s, int k) { //找出字典序最小，即要优先前缀a
        int i = 0;
        while (i < s.size() && k){
            int to_a = min(s[i] - 'a', 'z' - s[i] + 1);//当前是s[i]到a的距离最小值
            if (k >= to_a){ // 当前k足够消耗时直接改s[i]为a，否则直接减k
                k -= to_a;
                s[i] = 'a';
            }else{
                s[i] -= k;
                k = 0;
            }
            ++i;
        }
        return s;
    }
};