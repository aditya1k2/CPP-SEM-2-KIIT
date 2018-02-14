#include<iostream>
using namespace std;
class box
{
  private:
  int l,b,w;
  public:
  int getvol()
  {
    return(l*b*w);
  }
  void getinput(void);
};
void box::getinput(void)
{
  cout<<"Enter The Value Of l,b,w\n";
  cin>>l>>b>>w;
}
int main()
{
  box a;
  a.getinput();
  cout<<"Vol= "<<a.getvol();
  return 0;
}
