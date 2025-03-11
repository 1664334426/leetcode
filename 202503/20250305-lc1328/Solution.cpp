class Solution {
public:
    string breakPalindrome(string palindrome) {
        if (palindrome.size() == 1)
            return "";
        bool b = true;
        for (int i = 0; i < palindrome.size(); ++i){
            if (palindrome[i] != 'a'){
                b = false;
                break;
            }
        }
        if (b){
            palindrome.back() = 'b';
            return palindrome;
        }
        for (int i = 0; i < palindrome.size() / 2; ++i) {
            if (palindrome[i] != 'a'){
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome.back() = 'b';
        return palindrome;
    }
};