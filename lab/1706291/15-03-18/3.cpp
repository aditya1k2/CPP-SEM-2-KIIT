#include<iostream>
using namespace std;
class abstractclass
{
	public:
		virtual void display()=0;
};
class A:public abstractclass
{
	public:
		void display()
		{
			cout<<"Hello From A"<<endl;
		}
};
class B:public abstractclass
{
	public:
		void display()
		{
			cout<<"Hello From B"<<endl;
		}
};
int main()
{
	A obj1;
	B obj2;
	obj1.display();
	obj2.display();
	return 0;
};
	
		
			
