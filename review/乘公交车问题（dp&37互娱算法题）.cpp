#include<bits/stdc++.h>
using namespace std;
/*
��Ŀ������С��Ҫ�Ӽ���ȥ�����˻ᣬ��;Ҫ���˹��������кܶ���·�ߣ���ͬ·�߻��Ѳ�ͬʱ�䣬Ҫ����һ���ܵ����յ�ĳ˳�·�ߣ��һ��ѵ�ʱ�����١�
���룺��һ�������յ����ڵ�վm���������Ϊ0��mΪһ����Ȼ�����Ϳɹ�ѡ���·�ߵ�����n
������Ϊn�У�ÿ�е�����Ϊһ��·�ߵ�������ڵ�վ���յ����ڵ�վ���Լ����ѵ�ʱ�䡣
��������ٻ��ѵ�ʱ�䣨�������ݶ��н⣩��
ʾ����
6 5
0 2 5
1 4 3
2 6 4
4 6 1
2 4 3
*/ 
int m,n;
int mintime=0;
vector<int> start,end,cost;
int getmintime(int m,vector<int> start,vector<int> end,vector<int> cost){
	if(m==0){
		return 0;
	}
	vector<int> tmp;
	for(int i=0;i<n;i++){
		if(end[i]==m){
			tmp.push_back(i);
		}
	}
	if(tmp.size()==0){
		return 1000;//·���߲�ͨ�򷵻�һ�������������϶�����ѡ�����ֵ 
	}
	int min=cost[tmp[0]]+getmintime(start[tmp[0]],start,end,cost);
	for(int i=1;i<tmp.size();i++){
		int now=cost[tmp[i]]+getmintime(start[tmp[i]],start,end,cost);
		if(now<min){
			min=now;
		}
	}
	return min;
}
int main()  
{
	cin>>m>>n;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		start.push_back(t);
		cin>>t;
		end.push_back(t);
		cin>>t;
		cost.push_back(t);
	}
	cout<<getmintime(m,start,end,cost);
    return 0;
} 
