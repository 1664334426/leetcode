class Solution {
public:
    int maxPointsInsideSquare(vector<vector<int>>& points, string s) {//当前正方形是否能包括住只与当前绝对值的最大值有关
        vector<pair<int, char>> vec;
        for (int i = 0; i < points.size(); ++i)
            vec.emplace_back(max(abs(points[i][0]), abs(points[i][1])), s[i]);//枚举当前当前节点的绝对值的最大值和标签，并排序
        std::sort(vec.begin(), vec.end());
        unordered_set<char> st{vec[0].second};//把第一个节点加入哈希表
        for (int i = 1; i < vec.size(); ++i){ //因为排序了，所以从小到大枚举
            if (st.count(vec[i].second)){// 遇到相同标签，先查看是否是与上一个是同样距离的，如果距离相同，则上一个也要要放弃所以要减一，否则直接退出返回哈希表的数量
                if (vec[i].first == vec[i - 1].first)
                    return st.size() - 1;
                break;
            }
            st.insert(vec[i].second); //没遇到相同标签则加入
        }
        return st.size();
    }
};