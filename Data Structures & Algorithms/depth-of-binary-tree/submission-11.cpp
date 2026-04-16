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
    int maxDepth(TreeNode* root) {
        // Check if root was passed:
        if(!root)
            return 0;

        // Create stack that will store TreeNode* nodes
        // and the depth:
        std::stack<pair<TreeNode*, int>> depth;

        // Push root and it's depth onto the stack:
        depth.push({root, 1});

        // Create counter that will store the final result:
        int res = 0;

        // Go through tree while the stack is not empty:
        while(!depth.empty()) {
            // Create a node to point to top:
            pair<TreeNode*, int> current = depth.top();
            
            // Pop the top of the stack:
            depth.pop();

            // Create TreeNode* node that points to the node of
            // the pair:
            TreeNode* node = current.first;

            // Create a result counter to count the depth at current
            // node:
            int result = current.second;

            // If node is not nullptr, push nodes onto the stack and add
            // their respective depths:
            if(node != nullptr) {
                // Add the current result to the total result:
                res = max(res, result);

                
                if(node->left != nullptr) {
                    depth.push({node->left, result + 1});
                
                }
                if(node->right != nullptr) {
                    depth.push({node->right, result + 1});
                }
            }
        }

        return res;
    }
};