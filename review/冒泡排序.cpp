#include <iostream>
using namespace std;
void bubble_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int main(int argc, char** argv) {
	int n;
	cout<<"输入数组的大小："<<endl;
	cin>>n;
	int a[n];
	cout<<"输入"<<n<<"个数："<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	bubble_sort(a,n);
	cout<<"排好序的数为："<<endl;
	for (int i=0;i<n;i++){
		cout<<a[i]<<'\t';
	}
	return 0;
}
