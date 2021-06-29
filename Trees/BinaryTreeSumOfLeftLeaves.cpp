#include<bits/stdc++.h>
using namespace std;
 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    int sum=0;
    void Traverse(TreeNode* root,bool flag = false)
    {
        if (root->left == NULL && root->right == NULL)
        {
            if (flag == true)
                sum += root->val;
            return;
        }
        Traverse(root->left,true);
        Traverse(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        Traverse(root);
        return sum;
    }
};