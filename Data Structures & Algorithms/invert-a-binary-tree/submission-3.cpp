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
        
        if(!root)
            return nullptr;

        stack<TreeNode*> invert;

        invert.push(root);

        while(!invert.empty()) {
            // You need to create a node and set it to the top of stack:
            TreeNode* node = invert.top();
            
            // Pop the first node in stack
            invert.pop();
            // Swap the left and right child:
            swap(node->left, node->right);

            // If the node is the left child, push it on to the stack:
            if(node->left)
                invert.push(node->left);

            // If node is the right child, push it on to the stack:
            if(node->right)
                invert.push(node->right);            
        }

        // Return root:
        return root;
    }
};
