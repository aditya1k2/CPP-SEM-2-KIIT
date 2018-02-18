#include<iostream>
#include<string>
using namespace std;
class A
{
	private:
	string name;
	public:
	void getdata(void)
	{
		cout<<"Enter The Name Of The Student"<<endl;
		getline(cin,name);
	}
	void display()
	{
		cout<<"Name Of The Student is:- "<<name<<endl;
	}
};
class B:public A
{
	private:
	int roll;
	string branch;
	public:
	void getdata()
	{
		A::getdata();
		cout<<"Enter The Roll Number Of the Student"<<endl;
		cin>>roll;
		cin.ignore();
		cout<<"Enter The Branch Of the Student"<<endl;
		getline(cin,branch);
		
	}
	void display()
	{
		A::display();
		cout<<"Roll No. of The Student Is:-"<<roll<<endl;
		
		cout<<"Branch Of the Student Is:- "<<branch<<endl;
	}
	
};
int main()
{
	B b;
	b.getdata();
	b.display();
	return 0;
}
