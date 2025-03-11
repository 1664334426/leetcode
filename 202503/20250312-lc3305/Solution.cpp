class Solution {
public:
    inline bool isOk(vector<int>& vec, int k){
        int fsz = 0;
        bool res = true;
        for (int i = 0; i < vec.size(); ++i){
            if (i == 'a' - 'a' || i == 'e' - 'a' || i == 'i' - 'a' || i == 'o' - 'a' || i == 'u' - 'a')
                res = vec[i] && res;
            else
                fsz += vec[i];
        }
        return res && fsz >= k;
    }
    int count(string& word, int k){
        vector<int> vec(26, 0);
        int i = 0, j = 0, res = 0;
        while (j < word.size()){
            if (isOk(vec, k)){
                --vec[word[i++] - 'a'];
                res += word.size() - j + 1;
            }else{
                ++vec[word[j++] - 'a'];
            }
        }
        while (isOk(vec, k)){
            ++res;
            --vec[word[i++] - 'a'];
        }
        return res;
    }
    int countOfSubstrings(string word, int k) {
        return count(word, k) - count(word, k + 1);
    }
};