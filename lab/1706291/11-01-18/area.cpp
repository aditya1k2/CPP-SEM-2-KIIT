#include<iostream>
#include<conio.h>
using namespace std;
float area(float);
float area(int,float);
float area(float,float);
int main()
{
	float r,br,lt,bt,AC,AR,AT;
	int lr;
	cout<<"Enter The radius Of The Circle\n";
	cin>>r;
	cout<<"Enter The Lenght And Breath Of Rectangle\n";
	cin>>lr>>br;
	cout<<"Enter The Height And Breath Of The Right Triangle\n";
	cin>>lt>>bt;
	AC=area(r);
	AR=area(lr,br);
	AT=area(lt,bt);
	cout<<"Area Of The Circle="<<AC<<"\n";
	cout<<"Area Of The Ractangle="<<AR<<"\n";
	cout<<"Area Of The Triangle="<<AT<<"\n";
	getch();
	return 0;
}
float area(float rc)
{
	return(3.1415926*rc*rc);
}
float area(int l,float b)
{
	return(l*b);
}
float area(float len,float bre)
{
	return(0.5*len*bre);
}
