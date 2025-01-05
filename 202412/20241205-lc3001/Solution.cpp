class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        if (a == e || b == f){
            if (a > e) swap(a, e);
            if (b > f) swap(b, f);
            if (c >= a && c <= e && d >= b && d <= f)
                return 2;
            return 1;
        }

        if (abs(c - e) == abs(d - f)){
            if (a - c && e - c && b - d && f - d){
                if ((a - c)/abs(a - c) == (e - c)/abs(e - c) && (b - d)/abs(b - d) == (f - d)/abs(f - d) && abs(a - c) == abs(b - d) && abs(f - d) > abs(a - d))
                    return 2;
            }
            return 1;
        }
        return 2;
    }
};