class BrowserHistory {
public:
    vector<string> stk;
    int idx = 0;
    BrowserHistory(string homepage) {
        stk.push_back(homepage);
    }
    void visit(string url) {
        stk.resize(idx + 1);
        stk.push_back(url);
        ++idx;
    }
    string back(int steps) {
        idx = max(idx - steps, 0);
        return stk[idx];
    }
    string forward(int steps) {
        idx = min(idx + steps, (int)(stk.size() - 1));
        return stk[idx];
    }
};