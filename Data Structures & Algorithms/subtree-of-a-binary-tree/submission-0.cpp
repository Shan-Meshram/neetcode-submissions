class Solution {
public:
    bool same(TreeNode* root, TreeNode* subRoot){
        if(root==nullptr && subRoot==nullptr) return true;
        if(root==nullptr || subRoot==nullptr) return false;
        if(root->val!=subRoot->val) return false;
        return same(root->left,subRoot->left) && same(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr) return false;
        if(same(root,subRoot)) return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};