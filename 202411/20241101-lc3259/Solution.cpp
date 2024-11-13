class Solution {
public:
    vector<vector<long long>> memo;
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        long long a = energyDrinkA.back(), b = energyDrinkB.back(), tmp;
        for (int i = energyDrinkB.size() - 2; i >= 0; --i) {
            tmp = b;
            b = max(energyDrinkB[i] + b, a);
            a = max(energyDrinkA[i] + a, tmp);
        }
        return max(a, b);
    }
};