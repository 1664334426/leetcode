class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> st;
        int i = nums.size() - 1;
        for (; i >= 0; --i){
            if (st.count(nums[i])){
                break;
            }else{
                st.insert(nums[i]);
            }
        }
        ++i;
        return (i / 3) + (i % 3 != 0);
    }
};