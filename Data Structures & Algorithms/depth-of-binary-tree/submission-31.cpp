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
        // CREATE
        std::queue<TreeNode*> depth;

        if(root != nullptr)
            depth.push(root);

        int level = 0;

        while(!depth.empty()) {
            int size = depth.size();

            for(int i = 0; i < size; i++) {
                TreeNode* node = depth.front();

                depth.pop();

                if(node->right != nullptr)
                    depth.push(node->right);

                if(node->left != nullptr)
                    depth.push(node->left);
            }

            level++;
            
        }

        return level;
    }
};
