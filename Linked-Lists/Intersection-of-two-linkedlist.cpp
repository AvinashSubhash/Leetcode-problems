#include<bits/stdc++.h>
using namespace std;
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int> gd;
        while (headA!=NULL)
        {
            gd[headA]++;
            headA = headA->next;
        }
        while(headB!=NULL)
        {
            gd[headB]++;
            if (gd[headB] > 1)
                break;
            headB = headB->next;
        }
        return headB;
    }
};