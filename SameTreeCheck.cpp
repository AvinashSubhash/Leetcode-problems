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
            Traverse(p->left,q->left);
            Traverse(p->right,q->right);
        }
        else
        {
            flag=1;
            return;
        }
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        Traverse(p,q);
        if (flag == 1)
            return false;
        else
            return true;
    }
};