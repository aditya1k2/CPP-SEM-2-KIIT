#include<iostream>
using namespace std;
class dimensions
{
  char *p=NULL;
public:
  void display()
  {
    cout<<"Enter name";
    cin>>p;
    cout<<"Enter any random number to know your bhavishya b/w 1 and 10";
    int n;
    cin>>n;
    if(n>5)
    {
      cout<<"chutiya ka chutiya hi rahega tum zindagi bhar "<<p;
    }
    else
    {
      cout<<"Tum padaishi chutiye hi rahoge "<<p;
    }
  }
};
int main()
{
  dimenions d;
  d.display();
}
