#include<iostream>
using namespace std;
class display
{
  private:
  int x,y,z;
  public:
    display()
    {
      x=1;y=2;z=3;
    }
    void displayxyz()
    {
      cout<<"Values in x,y and z are..."<<endl;
      cout<<x<<"\t"<<y<<"\t"<<z<<"\t";

    }

};
int main()
{
  display a;
  a.displayxyz();
  return 0;
}
