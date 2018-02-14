/*Name:- Anshika rai
	Roll no. 1706301
	Ques No.:- 41 */
#include<iostream>
using namespace std;
int main()
{
int m,n,i,j,k,x,l,kmin;
cout<<"enter dimensions";
cin>>m>>n;
int arr[m][n];
cout<<"enter array elements";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cin>>arr[i][j];
}
int q[m*m];
k=0;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
q[k]=arr[i][j];
++k;
}
}
for(j=0;j<(m*n);j++)
{
for(i=0;i<(m*n)-1;i++)
{
if(q[i]>q[i+1]);
{
x=q[i+1];
q[i+1]=q[i];
q[i]=x;
}
}
}
cout<<"enter the value";
cin>>l;
for(i=0;i<(m*n);i++)
{
if(l==i+1)
kmin=q[i];
}
cout<<l<<"th min element "<<kmin;
return 0;
}
