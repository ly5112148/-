#include<iostream>
using namespace std;
#define M 10
int bi_search(int a[],int x,int n){
	int low=0,mid,up=n-1;
	while(low<up){
		mid=(low+up)/2;
		if(a[mid]==x)
			return mid;
		else if(x<a[mid])
			up=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
int main(int argc, char** argv){
	int array[]={1,3,6,24,30,32,36,46,100,120},i,p,x;
	cout<<"����Ҫ���ҵ�Ԫ�أ�";
	cin>>x;
	p=bi_search(array,x,M);
	for(i=0;i<M;i++)
		cout<<array[i]<<'\t';
	if(p>=0)
		cout<<"���ҳɹ�������Ԫ�ص��±�Ϊ��"<<p<<endl;
	else
		cout<<"δ���ҵ���"<<endl;
	return 0;
}
