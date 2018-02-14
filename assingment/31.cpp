/*Name:- Anshika rai
	Roll no. 1706301
	Ques No.:- 31 */

#include<iostream>
using namespace std;
int main()
{
	int a[100][100][100],m,n,p,temp;
	cout<<"Enter Order Of The Matrix\n";
	cin>>m>>n>>p;
	cout<<"Now Enter The Matrix\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<p;k++)
			{
				cin>>a[i][j][k];
			}
		}
	}
	cout<<"Entered Matrix is :-\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<p;k++)
			{
				cout<<a[i][j][k]<<"\t";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"Transpose OF The Entered Matrix\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=j;k<p;k++)
			{
				temp=a[i][j][k];
				a[i][j][k]=a[i][k][j];
				a[i][k][j]=temp;
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<p;k++)
			{
				cout<<a[i][j][k]<<"\t";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	cout<<"\n";
	return 0;
}
