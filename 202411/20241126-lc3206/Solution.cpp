class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int s = 1, res = 0;
        for (int i = 1; i < colors.size() + k - 1; ++i){
            if (colors[(i - 1) % colors.size()] != colors[(i) % colors.size()])
                ++s;
            else
                s = 1;
            if (s >= k)
                ++res;
        }
        return res;
    }
};