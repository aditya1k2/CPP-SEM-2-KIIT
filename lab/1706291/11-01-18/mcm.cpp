#include<iostream>
using namespace std;
class mcm
{
  public:
  int m,cm;
  void m1();
  void cm1();
  void getinput();
};
void mcm::getinput()
{
  cout<<"Enter The Value IN cm to Convert in m\n";
  cin>>cm;
  cout<<"Enter The Value In m to Convert in cm\n";
  cin>>m;
}
void mcm::m1()
{
  int cm=0;
  cm=m*100;
  cout<<"In cm= "<<cm<<"\n";
}
void mcm::cm1()
{
  float m=0;
  m=cm/100;
  cout<<"In m= "<<m<<"\n";
}
int main()
{
  mcm a;
  a.getinput();
  a.cm1();
  a.m1();
  return 0;
}
