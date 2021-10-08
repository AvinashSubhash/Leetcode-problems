#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    ListNode* next=nullptr;
    string str;
    ListNode* prev=nullptr;
};


class BrowserHistory {
public:
    ListNode* head = new ListNode();
    BrowserHistory(string homepage) {
        head->str = homepage;
        //ListNode* point;
    }
    
    void visit(string url) {
        ListNode* temp = new ListNode();
        head->next = temp;
        head = head->next;
        head->next->prev = head;
        head->str = url;
    }
    
    string back(int steps) {
        //point = head;
        while (head!=NULL || steps!=0)
        {
            head = head->prev;
            steps--;
        }
        return head->str;
    }
    
    string forward(int steps) {
        
    }
};