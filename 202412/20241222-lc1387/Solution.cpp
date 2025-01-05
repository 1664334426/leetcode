class Solution {
public:
    unordered_map<int, int> memo;
    int getKth(int lo, int hi, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pque;
        for (int i = lo; i <= hi; ++i)
            pque.push({getSize(i), i});
        while (--k)
            pque.pop();
        return pque.top().second;
    }
    int getSize(int x){
        if (x == 1)
            return 0;
        if (memo.count(x))
            return memo[x];
        if (x % 2)
            return memo[x] = getSize(x * 3 + 1) + 1;
        return memo[x] = getSize(x / 2) + 1;
    }
};