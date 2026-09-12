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
    int ans = 0;
    pair<int,int>help(TreeNode* root){
        if(root == NULL)return {0,0};
        auto pl = help(root->left);
        auto pr = help(root->right);
        int sum = pl.first + pr.first + root->val;
        int total = pl.second + pr.second + 1;
        if((sum / total) == root->val)ans++;
        return {sum,total};
    }
    int averageOfSubtree(TreeNode* root) {
        auto h = help(root);
        return ans;
    }
};