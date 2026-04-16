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
        // If node is not root, return nullptr:
        if(!root)
            return nullptr;

        // Create queue that will hold TreeNode* nodes
        std::queue<TreeNode*> invert;

        // Push root onto the queue:
        invert.push(root);

        // Go through tree while the queue is not empty:
        while(!invert.empty()) {
            // Create node that points to top element of queue:
            TreeNode* node = invert.front();

            // Pop the root from stack:
            invert.pop();

            // Swap the left and right children:
            swap(node->left, node->right);

            // If left node, push left node onto queue:
            if(node->left)
                invert.push(node->left);
            
            // If right node, push right node onto queue:
            if(node->right)
                invert.push(node->right);
        }

        // Return tree root:
        return root;
    }
};
