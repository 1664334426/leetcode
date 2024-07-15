class UnionFind { //并查集，题解区抄的
public:
    vector<int> parent;
    UnionFind(int n) {
        parent.resize(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    void unionSet(int index1, int index2) {
        parent[find(index2)] = find(index1);
    }
    int find(int index) {
        if (parent[index] != index) {
            parent[index] = find(parent[index]);
        }
        return parent[index];
    }
};
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        UnionFind unionFind(accounts.size() * 10);
        unordered_map<string, int> mp;
        unordered_map<int, string> getRoot;
        unordered_map<int, set<string>> mst;
        int bg = 0;
        for (vector<string>& it : accounts) {
            if(!mp.count(it[1]))//第一个邮件的编号
                mp[it[1]] = ++bg;
            for (int i = 2; i < it.size(); ++i) { //后面元素的编号，并合并各个邮箱
                if(!mp.count(it[i]))
                    mp[it[i]] = ++bg;
                unionFind.unionSet(unionFind.find(mp[it[i]]), unionFind.find(mp[it[i - 1]]));
            }
        }
        for (vector<string>& it : accounts) { //建树，名字编号映射到邮箱集合
            int r = unionFind.find(mp[it[1]]); // 集合的根
            getRoot[r] = it[0];//集合的根编号映射到名字
            for (int i = 1; i < it.size(); ++i) {
                mst[r].insert(it[i]);
            }
        }
        vector<vector<string>> ret;
        for (auto& it : mst) {
            vector<string> vec{getRoot[it.first]};//名字编号获取名字，并放到数组第一位
            for (auto& it2 : it.second){
                vec.push_back(it2);//因为set本身有序，直接后加到数组中
            }
            ret.push_back(vec);// 加入要返回的集合
        }
        return ret;
    }
};