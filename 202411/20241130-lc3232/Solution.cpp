class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0, sum2 = 0;
        for (const auto &item: nums){
            if (item >= 1 && item <= 9)
                sum1 += item;
            if (item >= 10 && item <= 99)
                sum2 += item;
        }
        return sum1 != sum2;
    }
};