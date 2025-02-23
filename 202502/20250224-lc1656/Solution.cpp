class OrderedStream {
public:
    vector<string> vec;
    int ptr = 1;
    OrderedStream(int n) {
        vec.resize(n + 1, "");
    }
    vector<string> insert(int idKey, string value) {
        vector<string>res;
        vec[idKey] = value;
        while (ptr < vec.size() && !vec[ptr].empty())
            res.push_back(vec[ptr++]);
        return res;
    }
};