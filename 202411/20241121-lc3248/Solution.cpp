class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int idx = 0;
        for (const auto &item: commands){
            if (item.front() == 'U'){
                idx -= n;
            } else if (item.front() == 'R'){
                idx += 1;
            } else if (item.front() == 'D'){
                idx += n;
            } else if (item.front() == 'L'){
                idx -= 1;
            }
        }
        return idx;
    }
};