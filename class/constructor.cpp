#include<iostream>
using namespace std;
class abc
{
private:
  int a;
public:
  abc()
  {
    a=10;
    cout<<"Hello Constructor\n";
    cout<<a;
  }
};
int main()
{
  abc a,b;
  return 0;
}
