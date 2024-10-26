class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int mxIdx = 0, sz = 0;
        for (int i = 1; i < skills.size(); ++i){
            if (skills[mxIdx] > skills[i]){
                ++sz;
            }else{
                sz = 1;
                mxIdx = i;
            }
            if(sz == k){
                return mxIdx;
            }
        }
        return mxIdx;
    }
};