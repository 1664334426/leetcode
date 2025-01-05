class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> temp, res;
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] == x)
                temp.push_back(i);
        }
        for (const auto &item: queries){
            if (item - 1 < temp.size()){
                res.push_back(temp[item - 1]);
            }else{
                res.push_back(-1);
            }
        }
        return res;
    }
};