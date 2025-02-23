class Solution {
public:
    bool search(vector<int>& nums, int target) {
        while (nums.size() > 1 && nums.front() == nums.back())
            nums.pop_back();
        if (nums.size() == 1)
            return nums[0] == target;
        int x = 0, y = nums.size() - 1;
        while (x < y){
            int mid = (x + y) / 2;
            if (nums[mid] > nums.back()){
                x = mid + 1;
            }else{
                y = mid;
            }
        }
        int t = x;
        x = t;
        y = nums.size() - 1;
        while (x < y){
            int mid = (x + y) / 2;
            if (nums[mid] < target){
                x = mid + 1;
            }else{
                y = mid;
            }
        }
        if (nums[x] == target)
            return true;
        x = 0;
        y = t;
        while (x < y){
            int mid = (x + y) / 2;
            if (nums[mid] < target){
                x = mid + 1;
            }else{
                y = mid;
            }
        }
        if (nums[x] == target)
            return true;
        return false;
    }
};