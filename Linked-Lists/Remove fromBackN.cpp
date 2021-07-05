#include<bits/stdc++.h>
using namespace std;
//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=1,j=1;
        ListNode* head2 = head;
        ListNode* head3 = head;
        while (head->next)
        {
            head=head->next;
            i++;
        }
        int num = i-n;
        if (i==1)
            return NULL;
        else if (i==2)
        {
            if (n==1)
            {
                head2->next=NULL;
                return head3;
            }
            else
                return head2->next;
        }
        if (num==0)
            return head2->next;
        while (j!=num)
        {
            head2=head2->next;
            j++;
        }
        head2->next = head2->next->next;
        return head3;
    }
};