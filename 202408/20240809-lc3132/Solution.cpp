class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        std::sort(nums1.begin(), nums1.end());//排序
        std::sort(nums2.begin(), nums2.end());
        for (int i = 2; i >= 0; --i) {//枚举差，因为去掉两个后nums1的头必是前三个的其中一个，逆序枚举，因为要返回最小的x就是差
            int diff = nums2[0] - nums1[i];
            int idx1 = i, idx2 = 0;
            while (idx1 < nums1.size() && idx2 < nums2.size()){//循环判断diff是否能满足nums2
                if (nums2[idx2] - nums1[idx1] == diff)
                    ++idx2;
                ++idx1;
            }
            if (idx2 == nums2.size())//nums2能枚举完则该diff成立
                return diff;
        }
        return -1;
    }
};