#include<bits/stdc++.h> 
using namespace std;  
class Date{
	int Year,Month,Day;
	public:
		Date(int y=2002,int m=1,int d=1){
			Year=y;
			Month=m;Day=d;
			cout<<"Constructor:";
			ShowDate();
		}
		void ShowDate(){
			cout<<Year<<"."<<Month<<"."<<Day<<endl;
		}
		~Date(){
			cout<<"Destructor:";
			ShowDate();
		}
};
Date d4(2008,4,4);
void fun(){
	cout<<"����fun����������\n";
	static Date d2(2008,2,2);
	Date d3(2008,3,3);
	cout<<"�˳�fun����������\n";
}
int main()  
{
	cout<<"����main����������\n";
	Date d1(2008,1,1);
	fun();
	fun();
	cout<<"�˳�main����������\n";
    return 0;  
}  
