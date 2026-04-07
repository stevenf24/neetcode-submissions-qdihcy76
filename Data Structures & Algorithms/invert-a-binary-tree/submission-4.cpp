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
        // If the root node passed isn't the root, return nullptr:
        if(!root)
            return nullptr;

        // Create a stack that stores TreeNode* nodes to 
        // store tree nodes:
        stack<TreeNode*> invert;

        // Push root onto the stack:
        invert.push(root);

        // Go through tree while stack is not empty:
        while(!invert.empty()) {
            // Create node and set it to the top of stack:
            TreeNode* node = invert.top();

            // Pop the the first node in stack:
            invert.pop();

            // Swap the lef tand right child:
            swap(node->left, node->right);

            // If the node is the left child, push it onto the stack:
            if(node->left)
                invert.push(node->left);

            // If the node is the right child, push it onto the stack:
            if(node->right)
                invert.push(node->right);
        }

        // Return root:
        return root;
    }
};
