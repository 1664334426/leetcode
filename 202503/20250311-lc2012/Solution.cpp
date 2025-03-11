class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        vector<int> zma(nums.size()), rmi(nums.size());
        zma[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i)
            zma[i] = max(zma[i - 1], nums[i]);
        rmi.back() = nums.back();
        for (int i = nums.size() - 2; i >= 0; --i)
            rmi[i] = min(rmi[i + 1], nums[i]);
        int res = 0;
        for (int i = 1; i < nums.size() - 1; ++i){
            if (nums[i] > zma[i - 1] && nums[i] < rmi[i + 1]){
                res+=2;
            }else if (nums[i] > nums[i - 1] && nums[i] < nums[i + 1]){
                ++res;
            }
        }
        return res;
    }
};