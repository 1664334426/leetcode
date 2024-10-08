class Solution {
public:
    inline long long getTtByTime(vector<int>& time, long long t){
        long long res = 0;
        for (const auto &item: time)
            res += t / item;
        return res;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long r = 1e14, l = 0;
        while (r > l){
            long long mid = (r + l) / 2;
            if (getTtByTime(time, mid) >= totalTrips){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        return r;
    }
};