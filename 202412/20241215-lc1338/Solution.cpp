class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int>mp;
        for (const auto &item: arr)
            ++mp[item];
        priority_queue<int> pque;
        for (const auto &item: mp)
            pque.push(item.second);
        int sum = 0, res = 0;
        while (sum < (arr.size() / 2) + (arr.size() % 2)){
            sum += pque.top();
            pque.pop();
            ++res;
        }
        return res;
    }
};