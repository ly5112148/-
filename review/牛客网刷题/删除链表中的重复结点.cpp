#include <bits/stdc++.h>
using namespace std;
/*
ɾ�������е��ظ���� 
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
              //�½�һ���ڵ㣬��ֹͷ���Ҫ��ɾ��
              ListNode* newHead=new ListNode(-1);
              newHead->next=pHead;
              ListNode* pre=newHead;
              ListNode* p=pHead;
              ListNode* next=NULL;
              while(p!=NULL && p->next!=NULL)
              {
                  next=p->next;
                  if(p->val==next->val)//�����ǰ�ڵ��ֵ����һ���ڵ��ֵ���
                  {
                      while(next!=NULL && next->val==p->val)//����ظ�����
                          next=next->next;
                    		pre->next=next;//ָ�븳ֵ�����൱��ɾ��
                    		p=next;
                  }
                  else//�����ǰ�ڵ����һ���ڵ�ֵ���ȣ�������ƶ�һλ
                  {
                      pre=p;
                      p=p->next;
                  }
              }
           return newHead->next;//����ͷ������һ���ڵ�
               
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
