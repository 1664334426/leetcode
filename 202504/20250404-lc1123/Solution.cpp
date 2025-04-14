class Solution {
    unordered_map<TreeNode*, int> memo;
    int getMaxDeep(TreeNode* root) {
        if (!root)
            return 0;
        return memo[root] = max(getMaxDeep(root->left), getMaxDeep(root->right)) + 1;
    }
    TreeNode* dfs(TreeNode* root) {
        if (memo[root->left] > memo[root->right]){
            return dfs(root->left);
        }else if(memo[root->left] < memo[root->right]){
            return dfs(root->right);
        }else{
            return root;
        }
    }
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        getMaxDeep(root);
        return dfs(root);
    }
};