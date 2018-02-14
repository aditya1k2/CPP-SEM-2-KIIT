#include<iostream>
using namespace std;
int main()
{
	int a[500],n,r,i=0,*p=a;
	int flag=0;
	cout<<"Enter The Number Of Elements You Want To Enter In String\n";
	cin>>n;
	cout<<"Enter The Array\n";
	for(p=a;p<a+n;p++)
	{
		cin>>*p;
	}
	cout<<"Enter The Element You Want To Search\n";
	cin>>r;
	int pos=1;
	for(p=a;p<a+n;p++)
	{
		if(*p==r)
		{
		flag=1;
		break;
		}
		pos++;
	}
	if(flag=1)
	cout<<"Positiom of Element is\n"<<pos<<"\n";
	else
	cout<<"Element Does Not Exist\n";

	
	return 0;
}
	
