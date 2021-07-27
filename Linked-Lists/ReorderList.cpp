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
    
    vector<ListNode> data;
    int count=0;
    void AddData(ListNode* head)
    {
        if (head == NULL)
            return;
        AddData(head->next);
        data.push_back(head);
        count++;
        return;
    }
    
    void ModifyData(ListNode* list1)
    {
        if (count%2==0)
        {
            if (count == 2)
                return;
            int num = (count-4)/2,s=0;
            for(int i=0;i<=num;i++)
            {
                data[s]->next  = list1->next->next;
                list1->next = data[s];
                s++;
            }
        }
        else
        {
            
        }
    }
    
    void reorderList(ListNode* head) {
              AddData(head);
        ModifyData(head);
    }
};