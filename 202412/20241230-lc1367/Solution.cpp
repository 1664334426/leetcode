struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        if (!root)
            return false;
        bool res = checkSub(head, root);
        return res || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
    bool checkSub(ListNode* head, TreeNode* root){
        if (!head)
            return true;
        if (!root)
            return false;
        if (head->val != root->val)
            return false;
        return checkSub(head->next, root->left) || checkSub(head->next, root->right);
    }
};