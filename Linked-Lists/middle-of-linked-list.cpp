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
    ListNode* middleNode(ListNode* head) {
        int count=0,p=0;
        ListNode* temp = head;
        while (temp!=NULL)
        {
            temp = temp->next;
            count++;
        }
        if (count==1)
            return head;
        count/=2;
        while (head!=NULL)
        {
            if (p==count)
                return head;
            head = head->next;
            p++;
        }
        return 0;
    }
};