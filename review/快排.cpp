#include<iostream>
using namespace std;
void quickSort(int a[],int left,int right){
	if(left<right){
		int i=left,j=right,x=a[i];
		while(i<j){
			while(i<j&&a[j]>=x) j--;
			a[i]=a[j];
			while(i<j&&a[i]<=x) i++;
			a[j]=a[i];
		}
		a[i]=x;
		quickSort(a,left,i-1);
		quickSort(a,i+1,right);
	}
}
int main()
{
	int a[5]={5,4,3,2,1};
	quickSort(a,0,4);
	for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
