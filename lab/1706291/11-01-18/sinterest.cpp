#include<iostream>
using namespace std;
inline float si(int p,int r,int t)
{
	return (p*r*t/100);
}
int main()
{
	int a,b,c,SI;
	cout<<"Enter Principle Value\n";
	cin>>a;
	cout<<"Enter Rate Value\n";
	cin>>b;
	cout<<"Enter Time\n";
	cin>>c;
	SI=si(a,b,c);
	cout<<"\nSI="<<SI<<"\n";
	return 0;
}

	
