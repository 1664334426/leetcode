class Solution {
public:
    unordered_map<int, int> memo; //获取二进制位数的缓存
    priority_queue<int, vector<int>, greater<int>> pque; // 小顶堆排序用
    bool canSortArray(vector<int>& nums) {
        int bg = -1, idx = 0; // bg是当前分组的二进制位数， idx是当前分组的起点
        for (int i = 0; i < nums.size(); ++i) {
            if(getBitSize(nums[i]) != bg){// 发现当前二进制位数与上一个分组的bg不同，代表上一个分组结束
                while (!pque.empty()){ //从上一个分组起点开始出小顶堆
                    nums[idx++] = pque.top();
                    pque.pop();
                }
                idx = i;
                bg = getBitSize(nums[i]); //更新当前分组信息和当前分组起点
            }
            pque.push(nums[i]);
        }
        while (!pque.empty()){ // 处理后缀分组
            nums[idx++] = pque.top();
            pque.pop();
        }
        for (int i = 0; i < nums.size(); ++i) { // 判断是否是递增数组
            if(i > 0 && nums[i - 1] > nums[i])
                return false;
        }
        return true;
    }
    inline int getBitSize(int n){ // 获取二进制位数
        if (memo.count(n))
            return memo[n];
        int ret = 0;
        while (n){
            if(n & 1)
                ++ret;
            n >>= 1;
        }
        return memo[n] = ret;
    }
};