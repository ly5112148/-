#include <bits/stdc++.h>
using namespace std;
void OutputPermutation(string &strdata,unsigned ileft,unsigned iright)
{
	if(ileft>iright) return;
	
	if(ileft==iright){
		cout<<strdata<<endl;
		return;
	}
	
	for(unsigned i=ileft;i<=iright;i++){
		swap(strdata[i],strdata[ileft]);
		OutputPermutation(strdata,ileft+1,iright);
		swap(strdata[ileft],strdata[i]);
	}
}

int main()  
{
	string a="abc";
	OutputPermutation(a,0,a.length()-1);
    return 0;
} 
