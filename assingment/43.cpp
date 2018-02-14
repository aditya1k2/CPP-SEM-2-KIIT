/* Name:- Niharika Agrawal
Roll no.:- 1706338
Ques No.:- 43 */

#include<iostream>
using namespace std;
int main()
{
int n,i,inv=0;
cout<<"enter string size";
cin>>n;
char a[n];
cout<<"input elements(only 0 1 A B C)";
for(i=0;i<n;i++)
cin>>a[i];
for(i=1;i<n;i+=2)
{
if(a[i]=='A')
{
if(a[i-1]=='0'||a[i+1]=='0')
{
a[i+1]='0';
a[i-1]='0';
a[i]='0';
}
}
else if(a[i]=='B')
{
if(a[i-1]=='1'||a[i+1]=='1')
{
a[i+1]='1';
a[i-1]='0';
a[i]='0';
}
}
else if(a[i]=='c')
{
if((a[i-1]=='0'&&a[i+1]=='1')||(a[i-1]=='1'&&a[i+1]=='0'))
{
a[i+1]='0';
a[i-1]='0';
a[i]='0';
}
if((a[i-1]=='0'&&a[i+1]=='0')||(a[i-1]=='1'&&a[i+1]=='1'))
{
a[i+1]='0';
a[i-1]='0';
a[i]='0';
}
}
else
{
inv=1;
cout<<"invalid input!!";
}
}
if(inv==0)
cout<<"the result is"<<a[n-1];
return 0;
}
