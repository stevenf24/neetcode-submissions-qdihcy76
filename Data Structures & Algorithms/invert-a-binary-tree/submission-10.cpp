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
        // Return false if root is nullptr:
        if(!root)
            return nullptr;

        // Create stack to utilize iterative DFS:
        std::stack<TreeNode*> invert;

        // Push the root to the stack:
        invert.push(root);

        // Go through tree while stack isn't empty:
        while(!invert.empty()) {
            // Create node to top element of stack:
            TreeNode* node = invert.top();

            // Pop root out of stack:
            invert.pop();

            // Swap left and right child:
            swap(node->left, node->right);

            // If left node is not nullptr, push left nodes onto stack:
            if(node->left)
                invert.push(node->left);
            
            // If right node is not nullptr, push right nodes onto stack:
            if(node->right)
                invert.push(node->right);
                
        }

        return root;


    }
};
