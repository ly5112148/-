#include <bits/stdc++.h>
using namespace std;
/*
�������Ϊ4�������ӽڵ�ֱ�Ϊ10,13,15����С�����ĸ��ڵ�Ϊ12.
���ǿ��Ѹ������ı�����ʽ�Ʋ������һ���������ֵΪ��1��2^k-1��
���ǿ����ö�����������������С�����ĸ��ڵ㡣
*/
int FindMin(int* arr,int left,int right)  
{  
    int mid=((right-left)>>1)+left;  
    if(arr[0]<=mid&&arr[2]>=mid)  
        return mid;  
    else if(arr[0]>mid)  
        return FindMin(arr,mid+1,right);  
    else if(arr[2]<mid)  
        return FindMin(arr,left,mid-1);  
}  
int main()  
{  
    int k=0;  
    cin>>k;  
    int arr[3];  
    for(int i=0;i<3;++i)  
    {  
        cin>>arr[i];    
    }  
    sort(arr,arr+3);  
    int right=(1<<k)-1; //��1����kλ��===��2^k  
    int min=FindMin(arr,1,right);  
    cout<<min<<endl;  
    return 0;
} 
