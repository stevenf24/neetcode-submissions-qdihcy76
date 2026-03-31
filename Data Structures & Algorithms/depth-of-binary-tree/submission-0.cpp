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
        // If the root is null, return 0:
        if(root == nullptr)
            return 0;

        // Create stack:
        stack<pair<TreeNode*, int>> myStack;

        // Push the root:
        myStack.push({root, 1});

        // Create counter variable to count the depth:
        int res = 0;

        // Go through tree:
        while(!myStack.empty()) {
            pair<TreeNode*, int> current = myStack.top();
            myStack.pop();
            TreeNode* node = current.first;
            int depth = current.second;

            if(node != nullptr) {
                res = max(res, depth);
                myStack.push({node->left, depth + 1});
                myStack.push({node->right, depth + 1});
            }
        }

        return res;
    }
};
