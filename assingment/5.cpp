/* Name:- Aditya Kumar Gupta
		Roll No.:- 1706291
		class-b-19
		Ques No.:-5 */
#include<iostream>
using namespace std;
int main()
{
	int y;
	char ch;
	cout<<"Enter a,b,c,d Accordingly To Perform Following Operation:-\n";
	cout<<"a. Factorial Of A Number\n";
	cout<<"b. Prime Or Not\n";
	cout<<"c. Odd OR Even\n";
	cout<<"d. Exit\n";
	cin>>ch;
	switch(ch)
	{
		case 'a':
		{
			int fact=1,x;
			cout<<"Enter The Number To Find Factorial\n";
			cin>>x;
			if(x<0)
			cout<<"Factorial Of Negative Number Is Not Possible\n";
			for(int i=1;i<=x;i++)
			{
				fact=fact*i;
			}
			cout<<"Factorial="<<fact<<"\n";
			break;
		}
		case 'b':
		{
			int n,flag=0;
			cout<<"Enter The Number To Check Wheather It Is Prime Or Not\n";
			cin>>n;
			for(int i=2;i<=n/2;i++)
			{
				if(n%i==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			cout<<n<<" Is a Prime Number\n";
			else
			cout<<n<<" Is Not a Prime Number\n";
			break;
		}
		case 'c':
		{
			int n;
			cout<<"Enter The Number To Check Wheather It Is Even Or Odd\n";
			cin>>n;
			if(n%2==0)
			cout<<n<<" IS Even\n";
			else
			cout<<n<<" IS Odd\n";
			break;
		}
		case 'd':
		{
			break;
		}
		default:
		{
			cout<<"Invalid Input\n";
			break;
		}
	}

	return 0;
}
