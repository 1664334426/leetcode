class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pque;
        int res = 0;
        for (int i = 0; i < apples.size(); ++i){
            if (apples[i] || days[i])
                pque.push({i + days[i], apples[i]});
            while (!pque.empty() && pque.top().first <= i)
                pque.pop();
            if (!pque.empty()){
                auto it = pque.top();
                pque.pop();
                ++res;
                --it.second;
                if (it.second)
                    pque.push(it);
            }
        }
        for (int i = apples.size(); !pque.empty(); ++i){
            while (!pque.empty() && pque.top().first <= i)
                pque.pop();
            if (!pque.empty()){
                auto it = pque.top();
                pque.pop();
                ++res;
                --it.second;
                if (it.second)
                    pque.push(it);
            }
        }
        return res;
    }
};