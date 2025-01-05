class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        unordered_map<int, int> nToSize;
        for (const auto &item: ages)
            ++nToSize[item];
        ages.clear();
        for (const auto &item: nToSize)
            ages.push_back(item.first);
        std::sort(ages.begin(), ages.end());
        int y = 0, x = 0, res = 0, sum = 0;
        for (; x < ages.size(); ++x) {
            while (y <= x && ages[y] <= 0.5 * ages[x] + 7){
                sum -= nToSize[ages[y]];
                ++y;
            }

            sum += nToSize[ages[x]];
            if (sum)
                res +=  (sum - 1)* nToSize[ages[x]];
        }
        return res;
    }
};