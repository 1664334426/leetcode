class Allocator {
public:
    vector<int> vec;
    Allocator(int n) {
        vec.resize(n, 0);
    }
    int allocate(int size, int mID) {
        for (int i = 0; i < vec.size(); ++i){
            if (!vec[i]){
                int s = size;
                bool tag = true;
                while (--s){
                    if (i + s >= vec.size() || vec[i + s]){
                        tag = false;
                        break;
                    }
                }
                if (tag){
                    for (int j = i; j < i + size; ++j) {
                        vec[j] = mID;
                    }
                    return i;
                }

            }
        }
        return -1;
    }
    int freeMemory(int mID) {
        int res = 0;
        for (auto &item: vec){
            if (item == mID){
                ++res;
                item = 0;
            }
        }
        return res;
    }
};