#include<iostream>
using  namespace std;
class adi
{
  int a=0;
public:
  friend void getinput(adi);
  void display(adi);
};
void getinput()
{
  cout<<"Enter The Value\n";
  cin>>a;
}
void adi::display(adi b)
{
  cout<<a;
}
int main()
{
  adi b;
  getinput(b);
  b.display();
  return 0;
}
