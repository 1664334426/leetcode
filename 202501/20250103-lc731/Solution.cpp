class MyCalendarTwo {
public:
    map<int ,int> mp;
    MyCalendarTwo() {

    }
    bool book(int startTime, int endTime) {
        ++mp[startTime];
        --mp[endTime];
        int sum = 0;
        for (const auto &item: mp){
            sum += item.second;
            if (sum > 2){
                --mp[startTime];
                ++mp[endTime];
                return false;
            }
        }
        return true;
    }
};