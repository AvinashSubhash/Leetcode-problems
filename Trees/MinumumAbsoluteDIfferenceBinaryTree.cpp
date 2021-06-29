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
    int flag=0;
    void Traverse(TreeNode* root,TreeNode* top)
    {
        if (root == NULL)
            return;
        TraverseAndCalculate(top,root);
        Traverse(root->left,top);
        Traverse(root->right,top);
    }
    void TraverseAndCalculate(TreeNode* root,TreeNode* curr)
    {
        if (root == NULL)
            return;
        if (root!=curr)
        {
            if (flag == 0)
            {
                //cout<<min<<endl;
                min = abs(root->val - curr->val);
                flag=1;
            }
            else
            {
                //cout<<min<<endl;
                //cout<<abs(root->val - curr->val)<<endl;
                //cout<<endl;
                if (min > abs(root->val - curr->val))
                    min = abs(root->val - curr->val);
            }
        }
        TraverseAndCalculate(root->left,curr);
        TraverseAndCalculate(root->right,curr);
    }
    int getMinimumDifference(TreeNode* root) {
        Traverse(root,root);
        return min;
        
    }
};