#include<iostream>
using namespace std;
class weight
{
private:
  int kg;
  int gram;
public:
  void getdata();
  void putdata();
  void tota(weight,weight);
};
void weight::getdata()
{
  cout<<"Enter in kg\n";
  cin>>kg;
  cout<<"Enter in grams\n";
  cin>>gram;
}
void weight::putdata()
{
  cout<<kg<<"\n";
  cout<<gram;
}
void weight::tota(weight a,weight b)
{
  gram=a.gram+b.gram;
  kg=gram/1000;
  gram=gram%1000;
  kg+=a.kg+b.kg;
}
int main()
{
  weight a,b,c;
  a.getdata();
  b.getdata();
  c.tota(a,b);
  c.putdata();
}
