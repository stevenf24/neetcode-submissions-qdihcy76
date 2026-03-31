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

/**
 * We will use iterative DFS because it inverts a binary tree uisng an explicit stack
 * instead of recusion.
 * The idea is the same as recursive DFS:
 * - Visit a node
 * - Swap its left and right children
 * - Continue the process for its children
 * But instead of the call stack, we use our own stack data structure
*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return nullptr;

        stack<TreeNode*> invert;

        invert.push(root);

        while(!invert.empty()) {
            TreeNode* node = invert.top();
            invert.pop();
            swap(node->left, node->right);

            if(node->left) invert.push(node->left);
            if(node->right) invert.push(node->right);
        }

        return root;
    }
};
