/*************************************************************************
	> File Name: MergeTwoSortedLists.cpp
	> Author:Kcn
	> Mail:xvsfekcn@gmail.com 
	> Created Time: 日 10/11 23:18:54 2015
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution{
public:
    ListNode* mergeTwoLists(ListNode* l1,ListNode* l2)
    {
        ListNode* result;
        if(l1 && l2){
            while(l1 && l2){

            }
        }
        else if(l1){
            return l1;   
        }
        else{
            return l2;
        }
        return result;
    }
};
