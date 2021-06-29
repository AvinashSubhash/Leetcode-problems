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
    vector<int> DataVector;
    int i=0;
    
    void Traverse(TreeNode* root)
    {
        if (root == NULL)
            return;
        
        Traverse(root->left);
        Traverse(root->right);
        DataVector.insert(DataVector.begin()+i,root->val);
        i++;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        Traverse(root);
        return DataVector;
    }
};