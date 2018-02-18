#include<iostream>
#include<string>
using namespace std;
class person
{
	private:
	string name;
	int age;
	char gender;
	public:
	void getdata()
	{
		cout<<"enter Name:-"<<endl;
		getline(cin,name);
		cout<<"Enter Age:-"<<endl;
		cin>>age;
		cout<<"Enter Gender(M/F/O/L/G):-"<<endl;
		cin>>gender;
		cin.ignore();
	}
	void display()
	{
		cout<<"Name:-"<<name<<endl;
		cout<<"Age:-"<<age<<endl;
		cout<<"Genger:-"<<gender<<endl;
	}
};
class employee:public person
{
	private:
	string comname;
	string eid;
	public:
	void getdata1()
	{
		cout<<"Enter Company Name:-"<<endl;
		getline(cin,comname);
		cout<<"Enter Employee Id:-"<<endl;
		getline(cin,eid);
	}
	void display1()
	{
		cout<<"Company Name Is:-"<<comname<<endl;
		cout<<"Employee id Is:-"<<eid<<endl;
	}

};
class programmer:public employee
{
 	private:
	int num;
	public:
	void getdata2()
	{
		getdata();
		getdata1();
		cout<<"Enter Number Of Languages Known:-"<<endl;
		cin>>num;
	}
	void display2()
	{
		display();
		display1();
		cout<<"Languages Known:-"<<num<<endl;
	}
};
int main()
{
	programmer a;
	a.getdata2();
	a.display2();
	return 0;
}










	











	
