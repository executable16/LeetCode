/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    TreeNode* curr;
public:
   
    void inorder(TreeNode* node)
    {
        if(node)
        {
            inorder(node->left);
            node->left=nullptr;
            curr->right=node;
            curr=node;
            inorder(node->right);
            return;
        }
        return;
    }
    TreeNode* increasingBST(TreeNode* root) {
        
        TreeNode* temp = new TreeNode(0);
        curr=temp;
        inorder(root);
        return temp->right;
    }
};
