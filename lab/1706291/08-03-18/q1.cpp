#include<iostream>
using namespace std;
class coordinate
{
	private:
		int x,y;
	public:
		coordinate(int x=10,int y=20)
		{
			this->x=x;
			this->y=y;
		}
	
		coordinate operator +(coordinate A)
		{
			coordinate temp;
			temp.x=x+A.x;
			temp.y=y+A.y;
			return temp;
		}
	void display()
	{	
		cout<<"Distance Moved= "<<x<<","<<y<<endl;
	}
};
int main()
{
	 coordinate obj1,obj2,obj3;
	 obj3=obj1+obj2;
	 obj3.display();
	 return 0;
}

