#include<iostream>
using namespace std;
class employee
{
	 private:
		int id;
		int skill;
		int hours;
		int salary;
	public:
		employee()
		{
			id=0;
			skill=0;
			hours=0;
			salary=0;
		}
		void getdata()
		{
			cout<<"Enter The Id Of the employee:- "<<endl;
			cin>>id;
			cout<<"Enter The hours Worked:- "<<endl;
			cin>>hours;
			cout<<"Enter The Skills Of emplyoee according to criteria given:-"<<endl;
			cout<<"Press:-"<<endl;
			cout<<"1. For Skilled Employee"<<endl;
			cout<<"2. For Semi Skilled Employee"<<endl;
			cout<<"3. For Not Skilled Employee"<<endl;
			cin>>skill;
			switch(skill)
			{	case 1: salary=100*hours;	
					break;
				case 2: salary=hours*150;
					break;
				case 3: salary=hours*100;
					break;
				default: cout<<"Wrong Input"<<endl;
			}
		}
		void display()
		{
			cout<<"Details Of The Employee:-"<<endl;
			cout<<"Id:- "<<id<<endl;
			cout<<"Skill Is:- ";
			switch(skill)
			{
				case 1: cout<<"Skilled Employee"<<endl;
					break;
				case 2: cout<<"Semi Skilled Employee"<<endl;
					break;
				case 3: cout<<"Not Skilled Employee"<<endl;
					break;
				default: cout<<"Wrong Input"<<endl;
			}
			cout<<"Hours Worked:- "<<hours<<endl;
			cout<<"Salary:- "<<salary<<endl;
		}
};
int main()
{
	employee obj[10];
	for(int i=0;i<2;i++)
	{
		obj[i].getdata();
		cout<<"Details Of Employee "<<i+1<<":-"<<endl;
		obj[i].display();
	}
	return 0;
}
			
