#include <bits/stdc++.h>
using namespace std;
//定义单链表 
typedef struct ListNode
{
    int     data;
    struct ListNode    *next;
}ListNode, *LinkedList;
//反转单链表的函数 
LinkedList ReverseList(LinkedList list){
	LinkedList newList;
	ListNode *tmp;
	if(list==NULL||(newList=(LinkedList)malloc(sizeof(ListNode)))==NULL){
		return NULL;
	}
	newList->data=list->data;
	newList->next=NULL;
	while(list->next!=NULL){
		tmp=newList;
		newList=list->next;
		list->next=list->next->next;
		newList->next=tmp;
	}
	free(list);
	return newList;
}
//对无头指针的链表进行输出的函数 
void print(LinkedList l){
	while(l->next!=NULL){
		cout<<l->data<<endl;
		l=l->next;
	}
	cout<<l->data;
}
int main(int argc, char* argv[]) {
	LinkedList l;
	l=new ListNode;
	l->next=NULL;//l是包含头指针的链表 
	for(int i=4;i>=1;i--){
		ListNode* n=new ListNode;
		n->data=i;
		n->next=l->next;
		l->next=n;
	}
	print(ReverseList(l->next));//直接传入头指针后面部分的链表 
	return 0;
}
