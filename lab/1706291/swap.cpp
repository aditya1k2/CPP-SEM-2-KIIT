#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a,b\n";
	cin>>a;
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"After Swapping\n"<<"a="<<a<<"b="<<b;


	return 0;
}
