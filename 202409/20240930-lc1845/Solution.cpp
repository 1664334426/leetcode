class SeatManager {
public:
    priority_queue<int, vector<int>, greater<>> pque;
    SeatManager(int n) {
        for (int i = 1; i <= n; ++i)
            pque.push(i);
    }

    int reserve() {
        int res = pque.top();
        pque.pop();
        return res;
    }

    void unreserve(int seatNumber) {
        pque.push(seatNumber);
    }
};