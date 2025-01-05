class MyCalendarThree {
public:
    map<int ,int> mp;
    MyCalendarThree() {
    }
    int book(int startTime, int endTime) {
        ++mp[startTime];
        --mp[endTime];
        int sum = 0, res = 0;
        for (const auto &item: mp){
            sum += item.second;
            res = max(res, sum);
        }
        return res;
    }
};