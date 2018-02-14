//Shweta Kumari 1706367 Q34

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
 char a[100],b[20],c[20],*x;
 cout<<"ENTER THE MAIN STRING\n";
 gets(a);
 cout<<"ENTER THE STRING TO BE INSERTED\n";
 gets(b);
 cout<<"ENTER THE WORD\n";
 gets(c);
 x=strstr(a,c);
 if(x=='\0')
  return 0;
 int i,j,pos,y=0,m,n;
 n=strlen(a);
 m=strlen(b);
 j=strlen(c);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==c[y])
   pos=i;
 }
 while(n>=pos)
 {
  a[n+j]=a[n];
  n--;
 }
 
 for(i=0;b[i]!='\0';i++)
  a[pos++]=b[i];
 cout<<"NEW STRING \n";
 cout<<a<<"\n";
 return 0;
}
