#include<iostream>
using namespace std;
class A{
	public:
		void f(void){
			cout<<"A::f";
		}
		virtual void g(void){
			cout<<"A::g";
		}
};
class B : public A{
	public:
		void f(void){
			cout<<"B::f";
		}
		void g(void){
			cout<<"B::g";
		}
};
int main(){
	A* pA=new B;
	pA->f();
	pA->g();
	B* pB=(B*)pA;
	pB->f();
	pB->g();
	return 0;
}
