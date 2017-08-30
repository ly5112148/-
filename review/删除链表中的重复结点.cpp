#include <bits/stdc++.h>
using namespace std;
/*
删除链表中的重复结点 
*/
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};


ListNode* deleteDuplication(ListNode* pHead)
    {
          if(pHead==NULL||pHead->next==NULL) return pHead;
          else
          {
              //新建一个节点，防止头结点要被删除
              ListNode* newHead=new ListNode(-1);
              newHead->next=pHead;
              ListNode* pre=newHead;
              ListNode* p=pHead;
              ListNode* next=NULL;
              while(p!=NULL && p->next!=NULL)
              {
                  next=p->next;
                  if(p->val==next->val)//如果当前节点的值和下一个节点的值相等
                  {
                      while(next!=NULL && next->val==p->val)//向后重复查找
                          next=next->next;
                    		pre->next=next;//指针赋值，就相当于删除
                    		p=next;
                  }
                  else//如果当前节点和下一个节点值不等，则向后移动一位
                  {
                      pre=p;
                      p=p->next;
                  }
              }
           return newHead->next;//返回头结点的下一个节点
               
          }
    }
int main()  
{
	ListNode* l=new ListNode(1);
	int a[6]={2,3,3,4,4,5};
	for(int i=5;i>=0;i--){
		ListNode* n=new ListNode(a[i]);
		n->next=l->next;
		l->next=n;
	}
	ListNode* newl =deleteDuplication(l);
	while(newl!=NULL){
		cout<<newl->val<<endl;
		newl=newl->next;
	}
    return 0;
} 
