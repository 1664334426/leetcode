class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {// 枚举每一个点
        if (!root) return false;
        if (root->val == subRoot->val)//发现头节点相同就走检查
            if (check(root, subRoot))
                return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
    bool check(TreeNode* root, TreeNode* subRoot){ // 检查当前两节点结构数值是否相同
        if (!root && root == subRoot)
            return true;
        if (root && subRoot && root->val == subRoot->val)
            return check(root->left, subRoot->left) && check(root->right, subRoot->right);
        return false;
    }
};