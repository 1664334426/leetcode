class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int> st1, st2;
         int r1 = 0, r2 = 0;
        for (int i : nums1) //加入集合1
            st1.insert(i);
        for (int i : nums2){ //加入集合2，并查看集合1中是否存在
            st2.insert(i);
            if(st1.count(i))
                ++r1;
        }
        for (int i : nums1)//再次查询集合2
            if(st2.count(i))
                ++r2;
        return {r2, r1};
    }
};