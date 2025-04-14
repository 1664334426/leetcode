class Solution {
public:
    int minimumSum(int n, int k) {
        int res = 0;
        unordered_set<int> st;
        int num = 1;
        for (int i = 0; i < n; ++i) {
            if (!st.count(num)){
                if (num < k){
                    st.insert(k - num);
                    res += num;
                }else{
                    res += num;
                }
            }else{
                --i;
            }
            ++num;
        }
        return res;
    }
};