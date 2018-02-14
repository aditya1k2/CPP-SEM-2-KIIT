#include<iostream>
using namespace std;
int main()
{
	int a,b,c,*p=&a,*q=&b,*r=&c;
	cout<<"Enter a,b\n";
	cin>>*p;
	cin>>*q;
	*r=*p;
	*p=*q;
	*q=*r;
	cout<<"After Swapping\n"<<"a="<<*p<<"b="<<*q;
	return 0;
}
	
