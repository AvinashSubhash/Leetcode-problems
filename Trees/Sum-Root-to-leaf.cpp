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
    int num=0;
    void Traverse(TreeNode* root,string data)
    {
        if (root==NULL)
            return;
        if (root->left == NULL && root->right==NULL)
        {
        data = data.append(to_string(root->val));
         num+= stoi(data);
        //cout<<data<<endl;
        return;
        }
        data = data.append(to_string(root->val));
        Traverse(root->left,data);
        Traverse(root->right,data);
        
    }
    int sumNumbers(TreeNode* root) {
        Traverse(root,"");
        return num;
    }
};