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
    TreeNode* invertTree(TreeNode* root) {
        // If the root node that is passed is not the root,
        // return nullptr:
        if(!root)
            return nullptr;

        // Create stack that will hold 'TreeNode*' nodes.
        // This will help us invert the tree by using DFS:
        stack<TreeNode*> invert;

        // Push the root onto the stack:
        invert.push(root);

        // Go through tree as long as stack is not empty:
        while(!invert.empty()) {
            // Create TreeNode* node that points to the top
            // of the stack:
            TreeNode* node = invert.top();

            // Pop the root from the stack:
            invert.pop();

            // Swap the left child and right child
            swap(node->left, node->right);

            // If the TreeNode* node points at left child,
            // push it onto the stack:
            if(node->left)
                invert.push(node->left);

            // If the TreeNode* node points at right child,
            // push it onto the stack:
            if(node->right)
                invert.push(node->right);
        }

        // Return root:
        return root;
    }
};
