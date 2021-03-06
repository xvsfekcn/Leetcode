/*************************************************************************
	> File Name: IntersectionOfTwoLinkedList.cpp
	> Author:Kcn
	> Mail:xvsfekcn@gmail.com
	> Created Time: 2015年01月20日 星期二 00时20分03秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

ListNode* reverseList(ListNode* head)
{
    ListNode* p = head;
    ListNode* q = p->next;
    ListNode* r;
    while(q){
        r = q->next;
        q->next = p;
        p = q;
        q = r;
    }
    head->next = NULL;
    return p;    
}

void getListNodeVec(vector<ListNode*>& destVec,ListNode* head)
{
    while(head){
        destVec.push_back(head);
        head = head->next;
    } 
}

int getListLen(ListNode* head)
{
    int len = 0;
    while(head){
        ++len;
        head = head->next;
    }
    return len;
}

ListNode* getIntersectionNode(ListNode* headA,ListNode* headB)
{
    if(headA == NULL || headB == NULL){
        return NULL;
    }
    int lenA = getListLen(headA);
    int lenB = getListLen(headB);
    if(lenA < lenB){
        swap(headA,headB);
    }
    for(int i = 0;i < abs(lenA - lenB); ++i){
        headA = headA->next; 
    }
    while(headA != headB){
        headA = headA->next;
        headB = headB->next;
    }
    return headA;
}

int main(int argc,char* argv[])
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(3);
    head = reverseList(head);
    while(head){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
    return 0;
}
