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
    vector<vector<int>> DataArray;
    int flag;
    void TraverseAndCheck(TreeNode* root)
    {
        if (root == NULL)
            return;
        flag=0;
        for(int i=0;i<DataArray.size();i++)
        {
            //cout<<DataArray[i][0]<<endl;
            if (DataArray[i][0] == root->val)
            {
                DataArray[i][1] += 1;
                flag=1;
            }
        }
        if (flag == 0)
        {
            vector<int> temp;
            temp.push_back(root->val);
            temp.push_back(1);
            DataArray.push_back(temp);
        }
        TraverseAndCheck(root->left);
        TraverseAndCheck(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        TraverseAndCheck(root);
        int max=0;
        vector<int> num;
        num.push_back(0);
        for(int i=0;i<DataArray.size();i++)
        {
            if (DataArray[i][1] > max)
            {
                max = DataArray[i][1];
                num[0] = DataArray[i][0];
            }
        }
        for(int i=0;i<DataArray.size();i++)
        {
            if (DataArray[i][1] == max)
            {
                flag=0;
                for(int j=0;j<num.size();j++)
                {
                    if (DataArray[i][0] == num[j])
                        flag=1;
                }
                if (flag == 0)
                    num.push_back(DataArray[i][0]);
            }
        }
        return num;         
            }
    
};