#include<iostream>
#include<string>
using namespace std;
class gross
{
	private:
	int id;
	string name;
	int age;
	int bs;
	public:
	void getinput();
	void display();
};
void gross::getinput()
{
	cout<<"Enter The Details Of The Employees\n";
	cout<<"Enter Id Of The Employee\n";
	cin>>id;
	cin.ignore();
	cout<<"Enter The Name Of The Employee\n";
	getline(cin,name);
	cout<<"Enter The Age Of The Employee\n";
	cin>>age;
	cout<<"Enter The Basic Salary Of The Employee\n";
	cin>>bs;
}
void gross::display()
{
	int da,hra,salary;
	da=0.8*bs;
	hra=.10*bs;
	salary=bs+da+hra;

	cout<<name<<"\t"<<id<<"\t"<<age<<"\t"<<bs<<"\t\t"<<salary<<"\t";
	cout<<"\n";
}

int main()
{
	int n;
	cout<<"Enter The Number Of Employees:\n";
	cin>>n;
	gross a[n];
	for(int i=0;i<n;i++)
	{
		a[i].getinput();
	}
	cout<<"------------------------------------------------------------------------------------------------------------\n";
	cout<<"NAME\t"<<"ID\t"<<"AGE\t"<<"BASIC SALARY\t"<<"GROSS SALARY\t"<<"\n";
	for(int i=0;i<n;i++)
	{
		a[i].display();
	}
	return 0;
}
