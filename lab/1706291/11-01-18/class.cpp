#include<iostream>
#include<string.h>
using namespace std;
class String
{
	public:
	char a[100];
	void getinput();
	void display();
	void count();
};
void String::getinput()
{
	cout<<"Enter The String\n";
	cin.getline(a,100);
}
void String::display()
{
	cout<<a<<"\n";
}
void String::count()
{
	int count=0;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'|| a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			count++;
		}
	}
	cout<<"Number Of vowels In String="<<count<<"\n";
}
int main()
{
	String a;
	a.getinput();
	a.display();
	a.count();
	return 0;
}
