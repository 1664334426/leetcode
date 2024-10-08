class Solution {
public:
    int takeCharacters(string s, int k) {
        array<int, 3> arr{0 ,0 ,0};
        for (int i = 0; i < s.size(); ++i)
            ++arr[s[i] - 'a'];
        if (min(arr[0], min(arr[1], arr[2])) < k)
            return -1;
        arr[0] -= k;arr[1] -= k;arr[2] -= k;
        int j = 0, res = 0;
        for (int i = 0; i < s.size(); ++i){
            --arr[s[i] - 'a'];
            while (arr[0] < 0 || arr[1] < 0 || arr[2] < 0)
                ++arr[s[j++] - 'a'];
            res = max(res, i - j + 1);
        }
        return s.size() - res;
    }
};