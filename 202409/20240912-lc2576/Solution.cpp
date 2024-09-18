class Solution {
public:
    bool dif(vector<int>& nums, int k){
        int i = 0, j = nums.size() - k;
        while (j < nums.size()){
            if (nums[i++] * 2 > nums[j++])
                return false;
        }
        return true;
    }
    int maxNumOfMarkedIndices(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int l = 0, r = (nums.size() / 2);
        while (r > l){
            int mid = (r + l + 1) / 2;
            if (dif(nums, mid)){
                l = mid;
            }else{
                r = mid - 1;
            }
        }
        return l * 2;
    }
};