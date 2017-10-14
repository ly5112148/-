#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[]="11122223455555",maxc;
	int n,sum,i,j,sn=1;
	int maxn=0;
	n=strlen(s);
	for(i=0;i<n-1;i++) {
		for(j=i;j<n-1;j++)
			if(s[j]==s[j+1])
				sn++;
			else break;
		if(sn>maxn) {
			maxn=sn;
			maxc=s[j];
		}
		sn=1 ;
	}
	for(i=0;i<maxn;i++)
		printf("%c",maxc);
	return 0;
}
