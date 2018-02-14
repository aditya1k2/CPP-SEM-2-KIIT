#include <iostream>
using namespace std;

public class Sample
{
  private:
  static int count;

  public:
  void getCount();
};
int sample::count;
void Sample :: getCount()
{
 cout<<"\nCount:" << count++ ;
}

int main ()
{
 Sample sl, s2 ,s3;

 s1.getCount();
 s2.getCount();
 s3.getCount();

 return 0;
}
