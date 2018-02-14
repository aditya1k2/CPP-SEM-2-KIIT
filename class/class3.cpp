#include<iostream>
using namespace std;
class X
{
  private:
    int x,y;
    void getx();
    void gety();
  public:
    void getxy(void);
};
 void X::getxy(void)
 {
   getx();
   gety();
 }
void X::getx()
   {
     cout<<"Enter x\n";
     cin>>x;
   }
void X::gety()
   {
     cout<<"Enter y\n";
     cin>>y;
   }
int main()
{
  X x;
  x.getxy();
  return 0;
}
