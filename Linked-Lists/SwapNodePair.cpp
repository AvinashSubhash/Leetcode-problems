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
    ListNode* result = new ListNode();
    ListNode* out = result;
    void TraverseAndSwap(ListNode* head)
    {
        
        if (head==NULL)
            return;
        
        if (head->next == NULL)
        {
           result->val = head->val;
           return;
        }
        
        result->val = head->next->val;
        result->next = new ListNode(head->val);
        head = head->next->next;
        if (head!=NULL)
        {
            result->next->next = new ListNode();
            result = result->next->next;
        }
        
        TraverseAndSwap(head);
        
    }
    
    
    ListNode* swapPairs(ListNode* head) {
        
        if (head==NULL)
            return NULL;
        TraverseAndSwap(head);
        
        return out;
    }
};