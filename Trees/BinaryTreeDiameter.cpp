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
    int max = INT_MIN,num;
    void Traverse(TreeNode* root)
    {
        if (root==NULL)
            return;
        num = Calculate(root->left)+Calculate(root->right);
        if (num > max)
            max=num;
        Traverse(root->left);
        Traverse(root->right);
    }
    int Calculate(TreeNode* root)
    {
        int left=0,right=0;
        if (root == NULL)
            return 0;
        else
        {
            
            left= 1+Calculate(root->left);
            right=1+Calculate(root->right);
            
        }
        if (left > right)
            return left;
     else
         return right;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        Traverse(root);
        return max;
    }
};