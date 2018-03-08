#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public:
	friend void operator >>(istream &in, date &d)
	{
		in>>d.dd>>d.mm>>d.yy;
	}
	friend void operator <<(ostream &out,date &d)
	{	out<<d.dd<<"-"<<d.mm<<"-"<<d.yy<<endl;
	}

};
int main()
{
	date d;
	cout<<"Enter a date"<<endl;
	cin>>d;
	cout<<"Date Entered IS"<<endl;
	cout<<d;
	return 0;
}
