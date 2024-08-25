class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        set<double> tree;//平衡树
        for(int i = 1; i < nums.size(); ++i){
            if ((nums[i] & 1) == (nums[i - 1] & 1))
                tree.insert(i - 1 + 0.5);//遇到奇偶相同的点则把中点加入
        }
        vector<bool> res(queries.size(), false);
        for (int i = 0; i < queries.size(); ++i){
            if (tree.upper_bound(queries[i][0]) == tree.upper_bound(queries[i][1]))//二分如果都是同一个点则证明区间内无中点
                res[i] = true;
        }
        return res;
    }
};