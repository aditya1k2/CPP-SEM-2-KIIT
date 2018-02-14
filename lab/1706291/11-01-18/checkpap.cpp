#include<iostream>
#include<math.h>
using namespace std;
class check
{
  public:
  int n;
  void getinput();
  void palin();
  void armst();
  void perfect();
};
void check::getinput()
{
  cout<<"Enter A Number\n";
  cin>>n;
}
void check::palin()
{
  int copy,rem,rev=0;
  copy=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(copy==rev)
	{
		cout<<"Entered Number Is a Palindrome\n";
	}
	else
	{
		cout<<"Entered Number Is Not a Palindrome\n";
	}
}
void check::perfect()
{
  int s=0;
  for(int i=1;i<n;i++)
  {
    if(n%i==0)
      s=s+i;
  }
  if(s==n)
    cout<<"It IS Perfect\n";
  else
   cout<<"It Is Not Perfect\n";
}
void check::armst()
{
  int c=0,s=0;
  int cp=n;

  while(cp!=0)
  {
    c++;
    cp/=10;
  }

  cp=n;
  while(cp!=0)
  {
    s=s+pow(cp%10,c);
    cp/=10;
  }
  if(s==n)
    cout<<"It Is Armstrong\n";
  else
    cout<<"It IS Not Armstrong\n";
}
int main()
{
  check a;
  a.getinput();
  a.palin();
  a.armst();
  a.perfect();
  return 0;
}
