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
    
    void InsertLeft(int mid,TreeNode* root, vector<int>& nums)
    {
        for(int i=mid-2;i>=0;i--)
        {
            while (root!=NULL)
            {
                if (nums[i] > root->val)
                    root = root->right;
                else
                    root = root->left;
            }
            TreeNode* temp;
            temp->val = nums[i];
            root = temp;
        }
    }
    void InsertRight(int mid,TreeNode* root, vector<int>& nums)
    {
        for(int i=mid+2;i<nums.size();i++)
        {
            while (root!=NULL)
            {
                if (nums[i] > root->val)
                    root = root->right;
                else
                    root = root->left;
            }
            TreeNode* temp;
            temp->val = nums[i];
            root = temp;
        }
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int mid = nums.size()/2;
        cout<<mid<<endl;
        cout<<nums[mid]<<endl;
        TreeNode* root;
        root->val = nums[mid];
        TreeNode* temp;
        temp->val = nums[mid-1];
        root->left = temp;
        TreeNode* temp2;
        temp2->val = nums[mid+1];
        root->right = temp2;
        InsertLeft(mid,root->left,nums);
        InsertRight(mid,root->right,nums);
        return root;
        
    }
};