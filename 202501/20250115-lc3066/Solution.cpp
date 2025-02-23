class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<>> pque;
        for (const auto &item: nums)
            pque.push(item);
        int res = 0;
        while (pque.size() >= 2 && pque.top() < k){
            ++res;
            long long mi = pque.top();
            pque.pop();
            long long mx = pque.top();
            pque.pop();
            pque.push(mi * 2 + mx);
        }
        return res;
    }
};