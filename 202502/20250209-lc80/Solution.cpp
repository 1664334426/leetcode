class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2)
            return nums.size();
        int head = 2;
        for (int i = 2; i < nums.size(); ++i){
            if (nums[i] != nums[head - 2])
                nums[head++] = nums[i];
        }
        return head;
    }
};