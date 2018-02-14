/* Name:- Aditya Kumar Gupta
		Roll No.:- 1706291
		class-b-19
		Ques No.:-6*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a[100][100],m,n,sum=0;
	float norm=0;
	cout<<"Enter The Order Of The Matrix\n";
	cin>>m>>n;
	cout<<"Enter The Matrix Now\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter The "<<i+1<<"*"<<j+1<<" Element\n";
			cin>>a[i][j];
		}
	}
	cout<<"Entered Matix Is:-\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum+=a[i][j]*a[i][j];
		}
	}
			norm=sqrt(sum);
			cout<<sum<<"\n";
		cout<<"Norm i.e(Sum OF Square Root OF All Elements) Of The MAtrix Entered:-\n";
		cout<<norm<<"\n";
		return 0;
}
