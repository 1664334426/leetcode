class RangeFreqQuery {
public:
    unordered_map<int, vector<int>> umst;
    RangeFreqQuery(vector<int>& arr) {
        for (int i = 0; i < arr.size(); ++i)
            umst[arr[i]].push_back(i);
    }
    int query(int left, int right, int value) {
        return  std::upper_bound(umst[value].begin(), umst[value].end(), right) - std::lower_bound(umst[value].begin(), umst[value].end(), left);
    }
};