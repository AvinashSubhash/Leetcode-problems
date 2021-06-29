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
    vector<string> data;
    int flag=0,num;
    void Traverse(TreeNode* root,string path)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
        {
            if (flag == 1)
                path += "->";
            else
                flag=1;
            num = root->val;
            path += to_string(num);
            data.push_back(path);
            return;
        }
        if (flag == 1)
            path += "->";
        else
            flag=1;
        num = root->val;
        cout<<num<<endl;
        path += to_string(num);
        Traverse(root->left,path);
        Traverse(root->right,path);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string path = "";
        Traverse(root,path);
        return data;
    }
};