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
        // Check if not root, return nullptr
        if(!root)
            return nullptr;

        // Create stack that will help invert the tree in an iterative
        // DFS behavior:
        stack<TreeNode*> invert;

        // Push the root into the stack:
        invert.push(root);

        // Go through tree to insert into stack as long as the stack
        // is not empty:
        while(!invert.empty()) {
            // Pointer variable 'node' stores the current
            // node at the top of the stack:
            TreeNode* node = invert.top();
            
            // Pop node from stack:
            invert.pop();

            // Swap the children of the current node:
            swap(node->left, node->right);

            // If node points to the left child, push that node
            // to the stack:
            if(node->left)
                invert.push(node->left);
            
            // If node points to the right child, push that node
            // to the stack:
            if(node->right)
                invert.push(node->right);
        }

        return root;

    }
};
