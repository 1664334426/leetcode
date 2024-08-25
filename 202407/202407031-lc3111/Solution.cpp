class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {//没看明白跟y有什么关系，直接忽略
        std::sort(points.begin(), points.end());//排序x做贪心
        int tag = -1, ret = 0;
        for (int i = 0; i < points.size(); ++i){
            if (tag < points[i][0]){//遇到新节点超过当前区间，直接更新区间，区间数量加一
                tag = points[i][0] + w;
                ++ret;
            }
        }
        return ret;
    }
};