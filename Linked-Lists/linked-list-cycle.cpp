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
    bool hasCycle(ListNode *head) {
    map<ListNode*,int> gd;
        while (head!=NULL)
        {
            gd[head]++;
            if (gd[head] > 1)
                return true;
            head = head->next;
        }
        return false;
    }
};