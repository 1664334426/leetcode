class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> res = arr;
        for (int i = arr.size() - 2; i >= 0; --i)
            arr[i] = max(arr[i], arr[i + 1]);
        for (int i = arr.size() - 2; i >= 0; --i)
            res[i] = arr[i + 1];
        res.back() = -1;
        return res;
    }
};