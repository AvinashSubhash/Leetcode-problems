#include<iostream>
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
    int count=0;
    int Traverse(TreeNode* root)
    {   int left=0,right=0;
        if (root == NULL)
        {
            return 0;
        }
        else
        {
            
            left= 1+Traverse(root->left);
            right=1+Traverse(root->right);
            
        }
        if (left < right)
        {
            if (left == 1)
                return right;    
            else
                return left;
        }
     else if(right < left)
     {
         if (right == 1)
             return left;
         else
             return right;
     }
     else
         return right;
    }
    int minDepth(TreeNode* root) {
    
        return Traverse(root);
    }
    
};