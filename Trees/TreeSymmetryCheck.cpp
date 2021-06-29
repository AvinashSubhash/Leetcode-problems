#include<iostream>
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
    int flag=0;
    void Traverse(TreeNode* p, TreeNode* q)
    {
        if (p==NULL && q == NULL)
            return;
        else if (p!=NULL && q!=NULL)
        {
            if (p->val != q->val)
            {
                flag=1;
                return;
            }
            Traverse(p->left,q->right);
            Traverse(p->right,q->left);
        }
        else
        {
            flag=1;
            return;
        }
    }
    bool isSymmetric(TreeNode* root) {
    
        Traverse(root->left,root->right);
        if (flag==1)
            return false;
        else
            return true;
    }
};