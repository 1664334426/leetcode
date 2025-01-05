class Solution {
public:
    string getBinaryStr(int s){
        string res;
        while (s){
            if (s % 2){
                res.push_back('1');
            }else{
                res.push_back('0');
            }
            s /= 2;
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
    string convertDateToBinary(string date) {
        int y = (date[0]-'0') * 1e3 + (date[1]-'0') * 1e2 +(date[2]-'0') * 1e1 + (date[3]-'0');
        int m = (date[5]-'0') * 1e1 + (date[6]-'0');
        int d = (date[8]-'0') * 1e1 + (date[9]-'0');
        return getBinaryStr(y) + "-" + getBinaryStr(m) + "-" + getBinaryStr(d);
    }
};