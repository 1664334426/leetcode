class Solution {
public:
    string losingPlayer(int x, int y) {
        if (min(x, y / 4) % 2)
            return "Alice";
        return "Bob";
    }
};