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
    bool flag=false;
    int sum=0;
    void TraverseAndSum(TreeNode* root,int cache)
    {
        //cout<<cache<<endl<<root->val<<endl;
        if (root == NULL)
            return;
        cache += root->val;
        if (root->left == NULL && root->right == NULL)
        {
            if (cache == sum)
                flag=true;
            return;
        }
        
            
        TraverseAndSum(root->left,cache);
        TraverseAndSum(root->right,cache);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        sum = targetSum;
        TraverseAndSum(root,0);
        return flag;
    }
};