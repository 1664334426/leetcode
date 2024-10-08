class Solution {
public:
    double getTimeByS(vector<int>& dist, double s){
        double res = 0;
        for (const auto &item: dist){
            res = ceil(res);
            res += item / s;
        }
        return res;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int r = 1e7 + 1, l = 0;
        while (r > l){
            int mid = (l + r) / 2;
            if (getTimeByS(dist, mid) > hour){
                l = mid + 1;
            }else{
                r = mid;
            }
        }
        if (r == 1e7 + 1 || r == 0)
            return -1;
        return r;
    }
};