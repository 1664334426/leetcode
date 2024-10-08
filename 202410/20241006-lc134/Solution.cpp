class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumgas = 0, sumcost = 0;
        for (int i = 0; i < gas.size(); ++i){
            sumgas += gas[i];
            sumcost += cost[i];
        }
        if (sumgas < sumcost)
            return -1;
        int idx = 0;
        int sz = gas[0];
        for (int i = 0; i < gas.size(); ++i){
            sz -= cost[i];
            if (sz < 0){
                sz = 0;
                idx = i + 1;
            }
            sz += gas[(i + 1) % gas.size()];
        }
        return idx;
    }
};