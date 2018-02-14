#include<iostream>
using namespace std;
class complex
{
  private:
    int real;
    int imag;
  public:
    void getData()
    {
      cout<<"Enter The Real Part Of Complex Number "<<endl;
      cin>>real;
      cout<<"Enter The Imaginary Part Of The Complex Number "<<endl;
      cin>>imag;
    }
    friend complex add(complex &a,complex &b);
    void display()
    {
      if(imag>0)
      {
      cout<<"Sum Of The Entered Complex Number Is:-"<<endl;
      cout<<real<<"+"<<imag<<"i"<<endl;
      }
      else
      {
      cout<<"Sum Of The Entered Complex Number Is:-"<<endl;
      cout<<real<<imag<<"i"<<endl;
    }
    }
};
complex add(complex &a,complex &b)
{
  complex t;
  t.real=a.real+b.real;
  t.imag=a.imag+b.imag;
  return t;
}

int main()
{
  complex a,b,c;
  a.getData();
  b.getData();
  c=add(a,b);
  c.display();

  return 0;
}
