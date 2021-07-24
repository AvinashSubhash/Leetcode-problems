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
    ListNode* SortedList = new ListNode();
    ListNode* temp = SortedList;
    
    ListNode* GroupAndAdd(ListNode* root,ListNode* temp,bool flag=true)
    {
        while( root != NULL)
        {
            if (flag==true)
            {
                if (root->val%2 != 0)
                {
                    temp->next = new ListNode(root->val);
                    //cout<<root->val<<endl;
                    temp = temp->next;
                }
            }
            else 
            {
                if (root->val%2 == 0)
                {
                    temp->next = new ListNode(root->val);
                    //cout<<root->val<<endl;
                    temp = temp->next;
                }
            }
            
            root = root->next;
        }
        return temp;
    }
    ListNode* oddEvenList(ListNode* head) {
        ListNode* root = head;
        ListNode* temp2;
        temp2 = GroupAndAdd(root,temp);
        temp2 = GroupAndAdd(head,temp2,false);
        return SortedList->next;
    }
};