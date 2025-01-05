class MyCalendar {
public:
    set<pair<int, int>> st;
    MyCalendar() {
    }
    bool book(int startTime, int endTime) {
        auto it = st.lower_bound({startTime, 0});
        if (it != st.end()){
            if (it->first < endTime)
                return false;
        }else{
            if (st.empty()){
                st.insert({startTime, endTime});
                return true;
            }
            --it;
            if (it->second <= startTime){
                st.insert({startTime, endTime});
                return true;
            }
            return false;
        }
        if (it != st.begin()){
            --it;
            if (it->second <= startTime){
                st.insert({startTime, endTime});
                return true;
            }
            return false;
        }else{
            if (endTime <= it->first){
                st.insert({startTime, endTime});
                return true;
            }
            return false;
        }
    }
};