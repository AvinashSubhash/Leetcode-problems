#include<bits/stdc++.h>
using namespace std;
struct ListNod
{
    ListNod* next=NULL;
    string str;
    ListNod* prev;
};


class BrowserHistory {
public:
    ListNod* head = new ListNod();
    BrowserHistory(string homepage) {
        head->str = homepage;
    }
    
    void visit(string url) {
        ListNod* temp = new ListNod();
        cout<<"\nVisit\nurl: "<< url <<endl;
        cout<<head->str;
        /*if (head->next==NULL)
        {
            head->next = temp;
            temp->prev = head;    
        }
        else
        {
            ListNod* temp1 = head->next;
            ListNod* node = new ListNod();
            head->next = node;
            node->next = temp1;
            temp1->prev = node;
            node->prev = head;
        }*/
        head->next = temp;
        temp->prev = head; 
        head = head->next;
        head->str = url;
        cout<<head->str<<endl<<endl;
        
    }
    
    string back(int steps) {
        cout<<"\nBack:\n"<<head->str;
        while (head->prev && steps>0)
        {
            head = head->prev;
            steps--;
        }
        cout<<head->str<<endl<<endl;
        return head->str;
    }
    
    string forward(int steps) {
        cout<<"\nForward:\n"<<head->str;
        while (head->next && steps>0)
        {
            head = head->next;
            steps--;
        }
        cout<<head->str<<endl<<endl;
        return head->str;
    }
};