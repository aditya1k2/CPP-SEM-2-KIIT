#include<iostream>
using namespace std;
class array
{
private:
  int n;
  int a[100];
public:

  array()
  {
    cout<<"Enter The Length Of The Array"<<endl;
    cin>>n;
    cout<<"Enter The Array"<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
  }
  ~array()
    {
      int sum=0,pro=1;
      for(int i=0;i<n;i++)
      {
        sum+=a[i];
        pro*=a[i];
      }
      cout<<"Sum:-"<<endl;
      cout<<sum<<endl;
      cout<<"Product:-"<<endl;
      cout<<pro;
    }

};
int main()
{
  array a;
  return 0;
}
