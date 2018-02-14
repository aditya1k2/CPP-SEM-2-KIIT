/*name- anshika rai
roll no.- 1706301
class:-b-19
question no.- 24*/

#include<iostream>
using namespace std;
int main()
{
int num,decimal,rem,base=1;
int binary=0;
cout<<"enter a decimal number\n";
cin>>num;
decimal=num;
    while(num>0)
   {
     rem=num%2;
     binary=binary+rem*base;
     num=num/2;
     base=base*10;
   }
cout<<"The binare equivalent is="<<binary<<"\n";
}
