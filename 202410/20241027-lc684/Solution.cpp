class Solution {
public:
    int Find(vector<int>& parent, int index) {
        if (parent[index] != index) {
            parent[index] = Find(parent, parent[index]);
        }
        return parent[index];
    }
    void Union(vector<int>& parent, int index1, int index2) {
        parent[Find(parent, index1)] = Find(parent, index2);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> vec(edges.size() + 1);
        for (int i = 0; i < vec.size(); ++i)
            vec[i] = i;
        for (const auto &item: edges){
            if (Find(vec, item[0]) != Find(vec, item[1])){
                Union(vec, item[0], item[1]);
            }else{
                return item;
            }
        }
        return {};
    }
};