#include<iostream>
using namespace std;
class B;
class A
{
  int a;
public:
  void setdata(int x)
  {a=x;
  //cin>>a;
    }
  friend void fun(A,B);
};
class B
{

  int b;
public:
  void setdata(int y)
  {b=y;}
  //cin>>b;}
  friend void fun(A,B);
};
void fun(A ob1,B ob2)
{
  cout<<"The Sum is:-"<<ob1.a+ob2.b;
}
int main()
{
  A obj1;
  B obj2;
  int a,b;
  cout<<"Enter a and b\n";
  cin>>a>>b;
  obj1.setdata(a);
  obj2.setdata(b);
  fun(obj1,obj2);
  return 0;
}
