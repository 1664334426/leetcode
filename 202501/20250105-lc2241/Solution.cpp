class ATM {
public:
    array<int, 5> sz;
    array<int, 5> mr{20, 50, 100, 200, 500};;
    ATM() {
        for (int i = 0; i < 5; ++i)
            sz[i] = 0;
    }
    void deposit(vector<int> banknotesCount) {
        for (int i = 0; i < 5; ++i)
            sz[i] += banknotesCount[i];
    }
    vector<int> withdraw(int amount) {
        vector<int> res{0, 0, 0, 0, 0};
        for (int i = 4; i >= 0; --i) {
            res[i] = min((amount / mr[i]), sz[i]);
            amount -= min((amount / mr[i]), sz[i]) * mr[i];
        }
        if (!amount){
            for (int i = 4; i >= 0; --i)
                sz[i] -= res[i];
            return res;
        }
        return {-1};
    }
};
