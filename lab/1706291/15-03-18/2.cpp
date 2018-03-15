#include<iostream>
using namespace std;
class Base
{
	private:
		static const int a=10;
	public:
	
		virtual void display()
		{
			cout<<"Value Of the a in Base:- "<<a<<endl;
		}
};
class Derived:public Base
{
	private:
		static const int a=20;
	public:
		
		void display()
		{
			cout<<"Value Of a in Derived:- "<<a<<endl;
		}
};
const int Base::a;
const int Derived::a;
int main()
{
	Base *bptr;
	Derived d;
	bptr=&d;
	bptr->display();
	return 0;
}	
		                         	

