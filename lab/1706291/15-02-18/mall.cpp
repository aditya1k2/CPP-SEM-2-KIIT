#include<iostream>
#include<string>
using namespace std;
class product
{
	private:
	string pname;
	string pid;
	public:
	void getdata()
	{
		cout<<"Enter The Name Of the Product:-"<<endl;
		getline(cin,pname);
		//cin.ignore();
		cout<<"Enter Product ID:-"<<endl;
		getline(cin,pid);
	}
	void display()
	{
		cout<<"Name of the Product:-"<<endl;
		cout<<pname;
		cout<<"\nProduct Id Is:-"<<pid<<endl;
	}
};	
class price
{
	private:
	float price;
	float pid;
	public:
	void getdata()
	{
		cout<<"Enter The Price Of The good:-"<<endl;
		cin>>price;
		cout<<"Enter Id:-"<<endl;
		cin>>pid;

	}
	void display()
	{
		cout<<"Entered Price:-"<<price<<endl;
	}
};
class goods:public product,public price
{
	public:
	void getdata()
	{
		product::getdata();
		price::getdata();
	}
	void display()
	{
		product::display();
		price::display();
	}
};
int main()
{
	int size;
	goods a;
	a.getdata();
	a.display();
	size=sizeof(goods);
	cout<<size<<endl;
	return 0;
}
















	
