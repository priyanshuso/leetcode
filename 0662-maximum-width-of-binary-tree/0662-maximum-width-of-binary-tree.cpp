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
    int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});

        unsigned long long maxWidth = 0;

        while (!q.empty()) {
            int currLevelSize = q.size();

            unsigned long long minIdx = q.front().second;
            unsigned long long firstIdx = 0, lastIdx = 0;

            for (int i = 0; i < currLevelSize; i++) {
                auto curr = q.front();
                q.pop();

                TreeNode* node = curr.first;
                unsigned long long idx = curr.second - minIdx;

                if (i == 0) {
                    firstIdx = idx;
                }

                if (i == currLevelSize - 1) {
                    lastIdx = idx;
                }

                if (node->left) {
                    q.push({node->left, 2 * idx + 1});
                }

                if (node->right) {
                    q.push({node->right, 2 * idx + 2});
                }
            }

            maxWidth = max(maxWidth, lastIdx - firstIdx + 1);
        }

        return (int)maxWidth;
    }
};