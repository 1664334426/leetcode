class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        std::sort(buses.begin(), buses.end());
        std::sort(passengers.begin(), passengers.end());
        int i = 0, j = 0, sum = 0;
        while (i < buses.size()){
            while (j < passengers.size() && passengers[j] <= buses[i]){
                ++sum;
                if (sum >= (buses.size() - i) * capacity){
                    while (j > 0 && passengers[j] == passengers[j - 1] + 1)
                        --j;
                    return passengers[j] - 1;
                }
                ++j;
            }
            ++i;
            sum = max(sum - capacity, 0);
        }
        auto it = std::upper_bound(passengers.begin(), passengers.end(), buses.back());
        if (it == passengers.begin())
            return buses.back();
        --it;
        if (*it == buses.back()){
            j = it - passengers.begin();
            while (j > 0 && passengers[j] == passengers[j - 1] + 1)
                --j;
            return passengers[j] - 1;
        }
        return buses.back();
    }
};