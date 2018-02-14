#include<iostream>
#include<string>
using namespace std;
class stud
{
  private:
    string A;
    string B;
    string C;
    string D;
  public:
    stud()
    {
      cout<<"Enter The Name OF The Student A"<<endl;
      getline(cin,A);
      cout<<"Enter The Name OF The Student B"<<endl;
      getline(cin,B);
      cout<<"Enter The Name OF The Student C"<<endl;
      getline(cin,C);
      cout<<"Enter The Name OF Student D"<<endl;
      getline(cin,D);
    }
    display(stud &b)
    {
      A=b.A;
      B=b.B;
      C=b.C;
      D=b.D;
    }
    void displayAll()
    {
      cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<D<<endl;
    }
    void count()
    {
      int count=0;
      cout<<"Numbers Of Characters in A:-"<<endl;
      for(int i=0;i<A.length();i++)
      {
        count++;
      }
      cout<<count<<endl;
      count=0;
      cout<<"Numbers Of Characters in B:-"<<endl;
      for(int i=0;i<B.length();i++)
      {
        count++;
      }
      cout<<count<<endl;
       count=0;
      cout<<"Numbers Of Characters in C:-"<<endl;
      for(int i=0;i<C.length();i++)
      {
        count++;
      }
      cout<<count<<endl;
      count=0;
      cout<<"Numbers Of Characters in D:-"<<endl;
      for(int i=0;i<D.length();i++)
      {
        count++;
      }
      cout<<count<<endl;

    }
};
int main()
{
  stud a;
  stud b(a);
  b.displayAll();
  a.count();
  return 0;
}
