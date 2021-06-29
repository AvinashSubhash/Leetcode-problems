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
    vector<int> SumArray;
    void TraverseAndSum(TreeNode* root,int cache)
    {
        //cout<<cache<<endl<<root->val<<endl;
        if (root == NULL)
            return;
        cache += root->val;
        if (root->left == NULL && root->right == NULL)
        {
            SumArray.push_back(cache);
            return;
        }
        
            
        TraverseAndSum(root->left,cache);
        TraverseAndSum(root->right,cache);
    }
    int maxPathSum(TreeNode* root) {
     TraverseAndSum(root,0);
     int max = SumArray[0];
     for(int i=0;i<SumArray.size();i++)
         if (SumArray[i] > max)
             max = SumArray[i];
     return max;
    }
};