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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        TreeNode* result = root;
        for(int i=1;i<preorder.size();i++)
        {
            root = result;
             while(true)
             {
                 if (root->val > preorder[i])
                 {
                    if (root->left == NULL)
                    {
                        root->left = new TreeNode(preorder[i]);
                        break;
                    }
                     root =root->left;
                 } 
                 else if (root->val < preorder[i])
                 {
                    if (root->right == NULL)
                    {
                        root->right = new TreeNode(preorder[i]);
                        break;
                    }
                     root = root->right;
                 }
             }
        }
        return result;
    }
};