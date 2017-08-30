#include <bits/stdc++.h>
using namespace std;
/*
找出单链表环的入口
*/
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
		if(pHead==NULL||pHead->next==NULL||pHead->next->next==NULL){
            return NULL;
        }
        ListNode* fast=pHead->next->next;
        ListNode* slow=pHead->next;
        while(fast!=slow){
            if(fast->next!=NULL&&fast->next->next!=NULL){
                fast=fast->next->next;
                slow=slow->next;
            }else{
                return NULL;
            }
        }
        fast=pHead;
        while(fast!=slow){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
};
int main(){
	return 0;
}
