#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
	int roll_no;
	string course;
	public:
		void read()
		{
			cout<<"Enter The Roll No. Of the student:-";
			cin>>roll_no;
			cin.ignore();
			cout<<"Enter the course of the student:-";
			getline(cin,course);
		}
		void display()
		{
			cout<<"Roll no.:- "<<roll_no<<endl;
			cout<<"Course:- "<<course<<endl;
		}
};
class result:private student
{
	private:
		float marks[3];
		student stu[3];
	public:
		void getdata()
		{
			cout<<"Enter The marks of the students:-"<<endl;
			for(int i=0;i<3;i++)
			{
				cin>>marks[i];
			}
			cout<<"Enter The Details Of the student:-"<<endl;
			for(int i=0;i<3;i++)
			{
				cout<<"Enter The details of student "<<i+1<<":-"<<endl;
				stu[i].read();
			}
		}
		void show()
		{	
			float sum=0;
			cout<<"Sum Of the Marks:-";
			for(int i=0;i<3;i++)
			{
				sum+=marks[i];
			}
			cout<<sum<<endl;
			cout<<"Details Of the student:-"<<endl;
			for(int i=0;i<3;i++)
			{
				cout<<"Details of student "<<i+1<<":-"<<endl;
				cout<<"Marks:-"<<marks[i]<<endl;
				stu[i].display();
			}
		}
};
int main()
{
	result obj;
	obj.getdata();
	obj.show();
	return 0;
}
	
