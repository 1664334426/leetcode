class Solution {
public:
    int minAnagramLength(string s) {
        for (int i = 1; i < s.size(); ++i){
            if (!(s.size() % i)){
                array<int, 26> arr{}, tmp{};
                for (int k = 0; k < i; ++k)
                    ++arr[s[k] - 'a'];
                ++tmp[s[i] - 'a'];
                int j = i + 1;
                for (; j < s.size(); ++j){
                    if (!(j % i)){
                        if (arr != tmp){
                            break;
                        }
                        tmp.fill(0);
                    }
                    ++tmp[s[j] - 'a'];
                }
                if (j == s.size() && arr == tmp){
                    return i;
                }
            }
        }
        return s.size();
    }
};