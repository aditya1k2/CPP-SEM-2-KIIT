#include<iostream>
#include<string>
using namespace std;
class product
{
private:
	string pname;
protected:
	int pid;
	public:
	void getdata()
	{
		cout<<"Enter The Name Of the Product:-"<<endl;
		getline(cin,pname);
		cout<<"Enter Product ID:-"<<endl;
		cin>>pid;
		cin.ignore();
	}
	void display()
	{
		cout<<"Name of the Product:-";
		cout<<pname;
		cout<<"\nProduct Id Is:-"<<pid<<endl;
	}
};
class price
{
	private:
	float price;
	public:
	void getdata()
	{
		cout<<"Enter The Price Of The good:-"<<endl;
		cin>>price;
		cin.ignore();
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
	int search(int key)
	{
		if(pid==key)
		return 1;
		else
		return 0;
	}
};
int main()
{
	goods* a;
	a=new goods[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter The Details Of The Product "<<i+1<<endl;
		a[i].getdata();
	}
	int key,flag=0,i=0;
	cout<<"Enter The ID of The Product to search"<<endl;
	cin>>key;
	for(i=0;i<5;i++)
	{
		if(a[i].search(key))
		{
			flag=1;break;
		}
	}
	if(flag==1)
	{
		cout<<"Product Found"<<endl;
		a[i].display();
	}
	else
	cout<<"Product Not Found"<<endl;
	return 0;
}
