class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int res = INT_MAX;
        for (const auto &item: nums){
            if (abs(res) >= abs(item)){
                if (abs(res) != abs(item))
                    res = item;
                else
                    res = max(res, item);
            }
        }
        return res;
    }
//};