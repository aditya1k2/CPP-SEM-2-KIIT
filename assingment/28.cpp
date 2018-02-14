/*name- anshika rai
roll no.- 1706301
question no.- 25*/


#include<iostream>
using namespace std;
void merge(int a[],int b[],int res[],int n,int m)
{
int i=0,j=0,k=0;
while(i<n)
{
res[k]=a[i];
i+=1;
k+=1;
}
merge(res,res+n+m);
}
int main()
{
int a[]={10,5,15};
int b[]={20,3,2,12};
int n=sizeof(a)/sizeof(a[0]);
int m=sizeof(b)/sizeof(b[0]);
int res[n+m];
merge(a,b,res,n,m);
cout<<"sorted merged list:";
for(int i=0; i<n+m;i++)
cout << ""<<res[i];
cout<<"n";
return 0;
}
