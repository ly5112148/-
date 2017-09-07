#include<bits/stdc++.h>
using namespace std;
/*
题目描述：小明要从家里去看奥运会，中途要换乘公交车，有很多条路线，不同路线花费不同时间，要求找一条能到达终点的乘车路线，且花费的时间最少。
输入：第一行输入终点所在的站m（假设起点为0，m为一个自然数）和可供选择的路线的条数n
接下来为n行，每行的内容为一条路线的起点所在的站，终点所在的站，以及花费的时间。
输出：最少花费的时间（好像数据都有解）。
示例：
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
		return 1000;//路线走不通则返回一个大数，这样肯定不会选择这个值 
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
