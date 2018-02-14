#include<iostream>
using namespace std;
int main()
{
	int n,rem,rev=0;
	int *n1=&n;
	int copy;
	cout<<"Enter a number\n";
	cin>>n;
	copy=n;
	while(*n1!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(copy==rev)
	{
		cout<<"Entered Number Is a Palindrome\n";
	}
	else
	{
		cout<<"Entered Number Is Not a Palindrome\n";
	}
	return 0;
}
