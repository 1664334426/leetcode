class Solution {
public:
    int maxmiumScore(vector<int>& cards, int cnt) {
        sort(cards.begin(), cards.end(), greater<int>());//从大到小排序
        int sum = 0, min0 = INT_MAX, min1 = INT_MAX;
        for (int i = 0; i < cnt; ++i){ //算出前cnt个最大元素的和
            sum += cards[i];
            if (cards[i] % 2) //算出前cnt中最大的奇数和偶数
                min1 = cards[i];
            else
                min0 = cards[i];;
        }
        if (!(sum % 2)) //前cnt最大为偶数直接返回
            return sum;
        int max0 = INT_MIN, max1 = INT_MIN;
        for (int i = cnt; i < cards.size(); ++i){//找到后n - cnt个中最大的奇数和偶数
            if (cards[i] % 2)
                max1 = max(max1, cards[i]);
            else
                max0 = max(max0, cards[i]);
        }
        int ret = 0;
        if (min1 != INT_MAX && max0 != INT_MIN)//如果前cnt个中存在最小的奇数和后n - cnt中存在最大的偶数，更新ret
            ret = sum - min1 + max0;
        if (min0 != INT_MAX && max1 != INT_MIN)//同上
            ret = max(ret, sum - min0 + max1);
        return ret;
    }
};