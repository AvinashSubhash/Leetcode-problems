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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* iter = head;
        vector<int> result;
        while(head!=NULL)
        {
            iter = head;
            while (iter!=NULL)
            {
                if (iter->val > head->val)
                {
                    result.push_back(iter->val);   
                    break;
                }
                iter = iter->next;
            }
            if (iter==NULL)
                result.push_back(0);
            head = head->next;
        }
        return result;
        
    }
};