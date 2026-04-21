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
        // Create queue to utilize BFS:
        std::queue<TreeNode*> depth;

        // If root is not nullptr, push the root onto the queue:
        if(root != nullptr)
            depth.push(root);

        

        // Create counter for depth:
        int level = 0;

        // Go through queue while it is not empty:
        while(!depth.empty()) {
            int size = depth.size();

            for(int i = 0; i < size; i++) {
                // Create TreeNode* and int variable to
                // point to the Node and integer value for
                // a node:
                TreeNode* node = depth.front();

                // Pop the current element:
                depth.pop();

                // If node points left, push it onto queue:
                if(node->left != nullptr)
                    depth.push(node->left);

                // If node points left, push it onto queue:
                if(node->right != nullptr)
                    depth.push(node->right);
            }

            level++;

        }
        
        return level;
    }
};
