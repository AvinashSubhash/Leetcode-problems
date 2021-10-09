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
    ListNode* swapNodes(ListNode* head, int k) {
        if (head->next==NULL)
            return head;
        int count=0,c2=0;
        ListNode* temp = head;
        ListNode* result = head;
        ListNode* k1;
        ListNode* k2;
        while (temp!=NULL)
        {
            count++;
            if (count==k)
                k1 = temp;
            temp = temp->next;
        }
        while (head!=NULL)
        {
            c2++;
            if (c2==(count-k+1))
                k2 = head;
            head = head->next;
        }
        int temp2 = k1->val;
        //cout<<k1->val<<k2->val<<endl;
        k1->val = k2->val;
        k2->val = temp2;
        return result;
        }
};