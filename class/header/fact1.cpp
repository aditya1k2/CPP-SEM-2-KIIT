#include<iostream>
using namespace std;
#include"fact.h"
int main()
{
  int n,f;
  cout<<"Enter any number\n";
  cin>>n;
  f=factorial(n);
  cout<<"Factorial:-"<<f;
  return 0;
}
