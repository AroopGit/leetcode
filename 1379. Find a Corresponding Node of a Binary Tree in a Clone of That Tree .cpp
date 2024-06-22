/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* ans;
 void check(TreeNode* original, TreeNode* cloned, TreeNode* target){
    if(original==NULL) return;
    if(original==target) ans=cloned;
    check(original->left, cloned->left, target);
    check(original->right, cloned->right, target);
 }

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
       check(original, cloned, target);
       return ans;
    }
};
