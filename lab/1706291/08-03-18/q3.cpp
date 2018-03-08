#include<iostream>
using namespace std;
class stock
{
	int bill_num;
	public:
		stock(int bill_num=10)
		{
			this->bill_num=bill_num;
		}
		stock operator ++(void)
		{
			++bill_num;
			return 0;
		}
		stock operator --(void)
		{
			--bill_num;
			return 0;
		}
		void display()
		{
			cout<<"Bill No.= "<<bill_num<<endl;
		}
};
int main()
{
	stock a;
	++a;
	a.display();
	--a;
	a.display();
	return 0;
}















