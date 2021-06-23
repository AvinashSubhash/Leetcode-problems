#include<bits/stdc++.h>
using namespace std;
// Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 

class Solution {
public:
    TreeNode* LowestAncestar;
    int num1,num2;
    void DriverLoop(TreeNode* root)
    {
        if (root == NULL)
            return;
        TraverseAndCheck(root,false,false,root);
        DriverLoop(root->left);
        DriverLoop(root->right);
    }
    void TraverseAndCheck(TreeNode* root,bool flag1,bool flag2,TreeNode* root_val)
    {
        if (root == NULL)
            return;
        if (flag1 == false)
        {
            if (root->val == num1)
                flag1 = true;
        }
        if (flag2 == false)
        {
            if (root->val == num2)
                flag2 = true;
        }
        if (flag1 == true && flag2 == true)
        {
            //cout<<root_val->val<<endl;
            LowestAncestar = root_val;
            return;
            
        }
        TraverseAndCheck(root->left,flag1,flag2,root_val);
        TraverseAndCheck(root->right,flag1,flag2,root_val);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //LowestAncestar = root;
        num1 = p->val;
        num2 = q->val;
        return LowestAncestar;
    }
};