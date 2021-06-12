
 #include<iostream>
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
    int size1=0,size2=0,sum=0;
    int pow(int num)
    {
        int res=1;
        for(int i=0;i<num;i++)
            res*=10;
        return res;
    }
    int SizeNum(int num)
    {
        int count=0;
        while (num >= 10)
        {
            num /= 10;
            count++;
        }
        count++;
        return count;
    }
    ListNode* MakeLL(int size,int num)
    {
        int Array[size];
        ListNode* ll1;
        for(int i=0;i<size;i++)
        {
            Array[i] = num-((num/10)*10);
            num/=10;
        }
        for(int i=size-1;i>=0;i--)
        {
            ll1->val=Array[i];
            ll1 = ll1->next;
        }
        return ll1;
    }
    ListNode* Calculate(ListNode* l1, ListNode* l2,ListNode* t1, ListNode* t2)
    {
        int val1=0,val2=0;
        
        while (t1 != NULL)
        {
            t1 = t1->next;
            size1++;
        }
        
        while (t2 != NULL)
        {
            t2 = t2->next;
            size2++;
        }
        
        for(int i=size1;i>0;i--)
        {
            val1 += ((l1->val)*(pow(i)));
            l1 = l1->next;
        }
        for(int i=size2;i>0;i--)
        {
            val2 += ((l2->val)*(pow(i)));
            l2 = l2->next;
        }
        return MakeLL(SizeNum(val1+val2),val1+val2);
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return Calculate(l1,l2,l1,l2);
    }
};

int main()
{
    Solution object1;
    ListNode* l1, *l2;
    ListNode* sol1;
    l1->val=0;
    l2->val=0;
    sol1 = object1.addTwoNumbers(l1,l2);
    while (sol1)
    {
        cout<<sol1->val<<endl;
        sol1 = sol1->next;
    }

}