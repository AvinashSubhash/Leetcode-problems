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
    int min;
    int count=0;
    void TraverseAndCalculate(TreeNode* root,int numPred)
    {
        if (root == NULL)
            return;
        if (numPred != root->val)
        {
        if (count == 1)
        {
            min = abs(root->val-numPred);
            count++;
        }
        else if (abs(root->val-numPred) < min)
            min = abs(root->val-numPred);    
        }
        else
            count++;
        TraverseAndCalculate(root->left,root->val);
        TraverseAndCalculate(root->right,root->val);
    }
    int getMinimumDifference(TreeNode* root) {
        min = root->val;
        TraverseAndCalculate(root,root->val);
        return min;
        
    }
};