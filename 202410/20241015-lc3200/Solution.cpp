class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int i = red, j = blue, d1 = 0, d2 = 0;
        while (i >= 0 && j >= 0){
            ++d1;
            if (d1 % 2){
                i -= d1;
            }else{
                j -= d1;
            }
        }
        while (red >= 0 && blue >= 0){
            ++d2;
            if (d2 % 2){
                blue -= d2;
            }else{
                red -= d2;
            }
        }
        return max(d1, d2) - 1;
    }
};