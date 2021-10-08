#include<bits/stdc++.h>
using namespace std;
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
       
        vector<int> data1;
        //bool flag=true;
        while(head!=NULL)
        {
            data1.push_back(head->val);
            head = head->next;
        }
        int size = data1.size();
        for(int i=0;i<size/2;i++)
        {
            if (data1[i]!=data1[size-i-1])
            {
                return false;
            }
        }
        return true;
        
           
    }
};