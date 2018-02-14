#include<iostream>
using namespace std;
int main()
{
	int a[500],n,r,i=0;
	int flag=0;
	cout<<"Enter The Number Of Elements You Want To Enter In String\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<< i+1 <<" Element\n";
		cin>>a[i];
	}
	cout<<"Enter The Element You Want To Search\n";
	cin>>r;
	for(i=0;i<n;i++)
	{
		if(a[i]=r)
		{
		flag=1;
		break;
		}
	}
	if(flag=1)
	cout<<"Positiom of Element is\n"<<a[i];
	else
	cout<<"Element Does Not Exist\n";

	
	return 0;
}
	
