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

        std::queue<TreeNode*> invert;

        invert.push(root);

        while(!invert.empty()) {
            TreeNode* temp = invert.front();

            invert.pop();

            swap(temp->left, temp->right);

            if(temp->left)
                invert.push(temp->left);
            
            if(temp->right)
                invert.push(temp->right);
        }

        return root;
    }
};
