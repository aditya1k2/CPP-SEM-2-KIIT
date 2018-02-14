#include<iostream>
#include<math.h>
using namespace std;
class rec
{
  private:
  int l,b;
  public:
  int dia()
  {
    return((sqrt)((l*l)+(b*b)));
  }
  float area(void);
  void input(void);
};
float rec::area(void)
{
  return(l*b);
}
void rec::input(void)
{
  cout<<"Enter The Value Of l and b\n";
  cin>>l>>b;
}
int main()
{
  rec a;
  a.input();
  cout<<"Diagonal= "<<a.dia()<<"\n";
  cout<<"Area= "<<a.area()<<"\n";
  return 0;

}
