#include<bits/stdc++.h> 
using namespace std;  
enum day {sun,mon,tue,wed,thu,fri,sat};
void print(day d){
	switch(d){
		case sun: cout<<"7";
			break;
		case mon: cout<<"1";
			break;
		case tue: cout<<"2";
			break;
		case wed: cout<<"3";
			break;
		case thu: cout<<"4";
			break;
		case fri: cout<<"5";
			break;
		case sat: cout<<"6";
			break;
	}
}
int main()  
{
	day i,j;
	for(i=sun;i<=sat;i=day(int(i)+1)){
		print(i);
	}
    return 0;  
}  
