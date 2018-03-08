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
	
		coordinate operator +=(coordinate A)
		{
			//coordinate temp;
			x+=A.x;
			y+=A.y;
			return 0;
		}
	void display()
	{	
		cout<<"Distance Moved= "<<x<<","<<y<<endl;
	}
};
int main()
{
	 coordinate obj1,obj2,obj3;
	 obj3+=obj2;
	 obj3.display();

	 return 0;
}

