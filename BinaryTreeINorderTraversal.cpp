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
    vector<int> vec1;
    int i=0;
    void traverse(TreeNode* root)
    {
        if (root == NULL)
            return;
        
        inorderTraversal(root->left);
        vec1.insert(vec1.begin()+i,root->val);
        i++;
        inorderTraversal(root->right);
        

    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        traverse(root);
        return vec1;
                
    }
};