class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int n = pow(r, 0.5) + 1, res = 0;
        vector<int> vec(n + 1, 0);
        for(int i = 2; i <= n; i++){
            if(vec[i] == 0){
                for(int j = i * i; j <= n; j += i){
                    vec[j] = 1;
                }
            }
            if (!vec[i]){
                if (i * i >= l && i * i <= r)
                    ++res;
            }
        }
        return r - l - res + 1;
    }
};