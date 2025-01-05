class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pque;
        for (int i = 0; i < nums.size(); ++i)
            pque.push({nums[i], i});
        for (int i = 0; i < k; ++i){
            auto it = pque.top();
            pque.pop();
            it.first *= multiplier;
            pque.push(it);
        }
        while(!pque.empty()){
            auto it = pque.top();
            pque.pop();
            nums[it.second] = it.first;
        }
        return nums;
    }
};