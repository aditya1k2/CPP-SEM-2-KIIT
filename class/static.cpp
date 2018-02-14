#include<iostream>
using namespace std;
class Account
{
  int balance; //instance member variable

  static float roi; //static member varioble/class variable
public:
  void setBalance(int b)
  {
    balance=b;
    cout<<balance<<"\n";
  }
 static void setRoi(float r)//static member function
  {roi=r;
  cout<<roi;}
};
float Account::roi;
int main()
{
    //Account a1,a2;
    int n;
    cout<<"Enter n\n";
    cin>>n;
    //a1.setBalance(n);
    Account::setRoi(n);
    //a1.setRoi(4.5);
    //cout<<a1.roi;
    //cout<<Account::setRoi;


}
