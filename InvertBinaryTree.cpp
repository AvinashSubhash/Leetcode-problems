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
    TreeNode* result = new TreeNode();
    
    int count=0;
    void TraverseAndMakeSymmetry(TreeNode* root,TreeNode* result1)
    {
        if (root == NULL)
        {
          result1 = NULL;
            return;
        }
        TreeNode* temp = new TreeNode();
        TreeNode* temp2 = new TreeNode();
        if (root->right != NULL)
            result1->left = temp;
        if (root->left != NULL)
            result1->right = temp2;
        
        result1->val = root->val;
        if (count == 0)
            result = result1;
        count++;
        cout<<root->val<<endl;
        
        TraverseAndMakeSymmetry(root->left,result1->right);
        TraverseAndMakeSymmetry(root->right,result1->left);
    }
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL)
            return NULL;
            if (root->right != NULL)
                result->left = new TreeNode();
            if (root->left != NULL)
                result->right = new TreeNode();
       TraverseAndMakeSymmetry(root,result);
       return result;
    }
};