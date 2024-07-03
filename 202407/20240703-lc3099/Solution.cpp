class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int t = x, s = 0;// s是各个数位上的数字之和
        while (t){
            s += t % 10;
            t /= 10;
        }
        return !(x % s) ? s : -1;
    }
};