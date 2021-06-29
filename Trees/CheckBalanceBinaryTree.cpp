#include<bits/stdc++.h>
using namespace std;
  //Definition for a binary tree node.
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
    bool flag=true;
    int CalculateDepth(TreeNode* root)
    {
        int left=1,right=1;
        if (root == NULL)
            return 0;
        left += CalculateDepth(root->left);
        right +=CalculateDepth(root->right);
        if (left>right)
            return left;
        else
            return right;
        
    }
    
    void TraverseAndCalculate(TreeNode* root)
    {
        if (root == NULL)
            return;
        if (abs(CalculateDepth(root->left)-CalculateDepth(root->right)) >= 2)
            flag=false;
        TraverseAndCalculate(root->left);
        TraverseAndCalculate(root->right);
    }
        
        
    bool isBalanced(TreeNode* root) {
        TraverseAndCalculate(root);
        return flag;
    }
};