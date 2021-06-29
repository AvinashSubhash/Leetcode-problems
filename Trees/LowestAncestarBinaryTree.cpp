#include<bits/stdc++.h>
using namespace std;
// Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:
    int num1,num2;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //LowestAncestar = root->val;
        num1 = p->val;
        num2 = q->val;
        if (num1 > root->val && num2 > root->val)
            return lowestCommonAncestor(root->right,p,q);
        else if (num1 < root->val && num2 < root->val)
            return lowestCommonAncestor(root->left,p,q);
        else
        return root;
    }
};