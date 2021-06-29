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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int flag=0;
        ListNode* trv = list2;
        while(trv->next)
        {
            trv=trv->next;
        }
        int count=-1;
        ListNode* temp = new ListNode(0);
        temp->val=0;
        temp->next = list1;
        while (temp->next)
        {
            count++;
            if (count == a)
            {
                ListNode* temp2 = temp;
                temp = temp->next;
                temp2->next = list2; 
            }
            else
                temp=temp->next;
            if (count == b)
                trv->next=temp->next;
             
        }
        return list1;
    }
};