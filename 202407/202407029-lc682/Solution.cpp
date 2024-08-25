class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> msgs;
        int sum = 0, tmp;
        for (const auto &item: operations){// 用一个栈去模拟一个消息，维护一个sum
            if (item == "+"){
                tmp = msgs[msgs.size() - 1] + msgs[msgs.size() - 2];
                sum += tmp;
                msgs.push_back(tmp);
            } else if (item == "C"){
                sum -= msgs.back();
                msgs.pop_back();
            } else if (item == "D"){
                tmp = msgs.back() * 2;
                sum += tmp;
                msgs.push_back(tmp);
            } else{
                tmp = stoi(item);
                sum += tmp;
                msgs.push_back(tmp);
            }
        }
        return sum;
    }
};