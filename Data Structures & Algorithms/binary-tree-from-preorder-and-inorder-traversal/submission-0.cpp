/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* DaC(map<int,int> & mp , vector<int>& preorder,int ps,int pe, vector<int>& inorder, int is, int ie){
        if(pe<ps || ie<is) return NULL;
         int i = mp[preorder[ps]];
         int leftsize = i - is;
        // TreeNode * temp = New TreeNode(preorder[ps]); // I need to add this mistake in notes 
        TreeNode * temp = new TreeNode(preorder[ps]);
        temp->left = DaC(mp, preorder,ps+1,ps+leftsize,inorder,is,is+leftsize-1);
        temp->right = DaC(mp, preorder,ps+leftsize+1,pe,inorder,is+leftsize+1,ie);
       return temp;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        int n = preorder.size();
        int m = inorder.size();
        for(int i=0;i<m;i++){
            mp[inorder[i]]=i;
        }
        TreeNode * ans = DaC(mp, preorder,0,n-1,inorder,0,m-1);
        return ans;
    }
};