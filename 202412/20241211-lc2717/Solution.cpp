class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int f, b;
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] == 1)
                f = i;
            if (nums[i] == nums.size())
                b = i;
        }
        return f + nums.size() - b - 1 - (f > b);
    }
};